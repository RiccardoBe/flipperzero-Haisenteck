#include <furi.h>
#include <furi_hal.h>
#include <gui/gui.h>
#include <locale/locale.h>
#include <input/input.h>
#include <storage/filesystem_api_defines.h>
#include <storage/storage.h>
#include <furi_hal_bt.h>
#define TAG "coges_app"

char* line_;
char* par1;
int BUFFER = 30;

typedef enum {
    CogesEventTypeKey,
    // You can add additional events here.
} CogesEventType;

typedef struct {
    CogesEventType type; // The reason for this event.
    InputEvent input;   // This data is specific to keypress data.
    // You can add additional data that is helpful for your events.
} CogesEvent;

typedef struct {
    FuriString* buffer;
    // You can add additional state here.
} CogesData;

typedef struct {
    FuriMessageQueue* queue; // Message queue (CogesEvent items to process).
    FuriMutex* mutex; // Used to provide thread safe access to data.
    CogesData* data; // Data accessed by multiple threads (acquire the mutex before accessing!)
} CogesContext;

// Invoked when input (button press) is detected.  We queue a message and then return to the caller.
static void Coges_input_callback(InputEvent* input_event, FuriMessageQueue* queue) {
    furi_assert(queue);
    CogesEvent event = {.type = CogesEventTypeKey, .input = *input_event};
    furi_message_queue_put(queue, &event, FuriWaitForever);
}

// Invoked by the draw callback to render the screen. We render our UI on the callback thread.
static void Coges_render_callback(Canvas* canvas, void* ctx) {
    // Attempt to aquire context, so we can read the data.
    CogesContext* Coges_context = ctx;
    if(furi_mutex_acquire(Coges_context->mutex, 200) != FuriStatusOk) {
        return;
    }

    CogesData* data = Coges_context->data;
    
	furi_string_printf(data->buffer, "Basic");
    canvas_set_bitmap_mode(canvas, 1);
	canvas_set_font(canvas, FontPrimary);
	canvas_draw_str(canvas, 10, 9, "Coges");
	canvas_set_font(canvas, FontSecondary);
	canvas_draw_str(canvas, 3, 25, "Ti sarebbe piaciuto eh?");
	canvas_draw_str(canvas, 108, 64, line_);
	// Release the context, so other threads can update the data.
    furi_mutex_release(Coges_context->mutex);
}

//-------------------------------------------------------------------------------------------------------------
void read_file() {
    Storage* storage = furi_record_open(RECORD_STORAGE);
    File* file = storage_file_alloc(storage);

    // here I used FSOM_OPEN_EXISTING (Open file, fail if file doesn't exist)
    bool result =
        storage_file_open(file, EXT_PATH("coges.log"), FSAM_READ_WRITE, FSOM_OPEN_ALWAYS);

    if(result) {
        int buffer_size = 128;
        char* buffer = (char*)malloc(sizeof(char) * buffer_size);

        // read the content of the file and insert into a buffer.
        storage_file_read(file, buffer, buffer_size);
		line_ = buffer;

        // free resources
        storage_file_close(file);
        storage_file_free(file);
    }
	return;
}

//------------------------------------------------------------------------------------------------------------------------------------

int32_t coges_app(void* p) {
    UNUSED(p);

    // Configure our initial data.
    CogesContext* Coges_context = malloc(sizeof(CogesContext));
    Coges_context->mutex = furi_mutex_alloc(FuriMutexTypeNormal);
    Coges_context->data = malloc(sizeof(CogesData));
    Coges_context->data->buffer = furi_string_alloc();

    // Queue for events (tick or input)
    Coges_context->queue = furi_message_queue_alloc(8, sizeof(CogesEvent));

    // Set ViewPort callbacks
    ViewPort* view_port = view_port_alloc();
    view_port_draw_callback_set(view_port, Coges_render_callback, Coges_context);
    view_port_input_callback_set(view_port, Coges_input_callback, Coges_context->queue);

    // Open GUI and register view_port
    Gui* gui = furi_record_open(RECORD_GUI);
    gui_add_view_port(gui, view_port, GuiLayerFullscreen);

    // Main loop
    CogesEvent event;
    bool processing = true;
    read_file();
	do {
		if (furi_message_queue_get(Coges_context->queue, &event, FuriWaitForever) == FuriStatusOk) {
            
			//create_file();
			FURI_LOG_T(TAG, "Got event type: %d", event.type);
            switch (event.type) {
                case CogesEventTypeKey:
                    // Short press of back button exits the program.
                    if(event.input.type == InputTypeLong && event.input.key == InputKeyBack) {
                        FURI_LOG_I(TAG, "Long-Back pressed. Exiting program.");
                        processing = false;
                    }
					if(event.input.type == InputTypeShort && event.input.key == InputKeyBack) {
						FURI_LOG_I(TAG, "Short-Back pressed. Exiting program.");
                        processing = false;
                    }
                    break;
                default:
                    break;
            }

            // Send signal to update the screen (callback will get invoked at some point later.)
            view_port_update(view_port);
        } else {
            // We had an issue getting message from the queue, so exit application.
            processing = false;
        }
    } while (processing);

    // Free resources
    view_port_enabled_set(view_port, false);
    gui_remove_view_port(gui, view_port);
    view_port_free(view_port);
    furi_record_close(RECORD_GUI);
    furi_message_queue_free(Coges_context->queue);
    furi_mutex_free(Coges_context->mutex);
    furi_string_free(Coges_context->data->buffer);
    free(Coges_context->data);
    free(Coges_context);

    return 0;
}
