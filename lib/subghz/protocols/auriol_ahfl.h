#pragma once

#include "base.h"

#include "../blocks/const.h"
#include "../blocks/decoder.h"
#include "../blocks/encoder.h"
#include "../blocks/generic.h"
#include "../blocks/math.h"

#define SUBGHZ_PROTOCOL_AURIOL_AHFL_NAME "Auriol AHFL" //Auriol AHFL 433B2 IPX4

typedef struct subghz_protocol_decoder_auriol_ahfl subghz_protocol_decoder_auriol_ahfl;
typedef struct subghz_protocol_encoder_auriol_ahfl subghz_protocol_encoder_auriol_ahfl;

extern const SubGhzProtocolDecoder subghz_protocol_auriol_ahfl_decoder;
extern const SubGhzProtocolEncoder subghz_protocol_auriol_ahfl_encoder;
extern const SubGhzProtocol subghz_protocol_auriol_ahfl;

/**
 * Allocate subghz_protocol_decoder_auriol_ahfl.
 * @param environment Pointer to a SubGhzEnvironment instance
 * @return subghz_protocol_decoder_auriol_ahfl* pointer to a subghz_protocol_decoder_auriol_ahfl instance
 */
void* subghz_protocol_decoder_auriol_ahfl_alloc(SubGhzEnvironment* environment);

/**
 * Free subghz_protocol_decoder_auriol_ahfl.
 * @param context Pointer to a subghz_protocol_decoder_auriol_ahfl instance
 */
void subghz_protocol_decoder_auriol_ahfl_free(void* context);

/**
 * Reset decoder subghz_protocol_decoder_auriol_ahfl.
 * @param context Pointer to a subghz_protocol_decoder_auriol_ahfl instance
 */
void subghz_protocol_decoder_auriol_ahfl_reset(void* context);

/**
 * Parse a raw sequence of levels and durations received from the air.
 * @param context Pointer to a subghz_protocol_decoder_auriol_ahfl instance
 * @param level Signal level true-high false-low
 * @param duration Duration of this level in, us
 */
void subghz_protocol_decoder_auriol_ahfl_feed(void* context, bool level, uint32_t duration);

/**
 * Getting the hash sum of the last randomly received parcel.
 * @param context Pointer to a subghz_protocol_decoder_auriol_ahfl instance
 * @return hash Hash sum
 */
uint8_t subghz_protocol_decoder_auriol_ahfl_get_hash_data(void* context);

/**
 * Serialize data subghz_protocol_decoder_auriol_ahfl.
 * @param context Pointer to a subghz_protocol_decoder_auriol_ahfl instance
 * @param flipper_format Pointer to a FlipperFormat instance
 * @param preset The modulation on which the signal was received, SubGhzRadioPreset
 * @return status
 */
SubGhzProtocolStatus subghz_protocol_decoder_auriol_ahfl_serialize(
    void* context,
    FlipperFormat* flipper_format,
    SubGhzRadioPreset* preset);

/**
 * Deserialize data subghz_protocol_decoder_auriol_ahfl.
 * @param context Pointer to a subghz_protocol_decoder_auriol_ahfl instance
 * @param flipper_format Pointer to a FlipperFormat instance
 * @return status
 */
SubGhzProtocolStatus
    subghz_protocol_decoder_auriol_ahfl_deserialize(void* context, FlipperFormat* flipper_format);

/**
 * Getting a textual representation of the received data.
 * @param context Pointer to a subghz_protocol_decoder_auriol_ahfl instance
 * @param output Resulting text
 */
void subghz_protocol_decoder_auriol_ahfl_get_string(void* context, FuriString* output);


void subghz_protocol_encoder_auriol_ahfl_stop(void* context);

SubGhzProtocolStatus subghz_protocol_encoder_auriol_ahfl_deserialize(void* context, FlipperFormat* flipper_format);

void subghz_protocol_encoder_auriol_ahfl_free(void* context);

LevelDuration subghz_protocol_encoder_auriol_ahfl_yield(void* context);

void* subghz_protocol_encoder_auriol_ahfl_alloc(SubGhzEnvironment* environment);