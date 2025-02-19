#pragma once

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

#include <lib/flipper_format/flipper_format.h>
#include <furi.h>
#include <furi_hal.h>
#include "../types.h"
#include <locale/locale.h>

#ifdef __cplusplus
extern "C" {
#endif

#define WS_NO_ID 0xFFFFFFFF
#define WS_NO_BATT 0xFF
#define WS_NO_HUMIDITY 0xFF
#define WS_NO_CHANNEL 0xFF
#define WS_NO_BTN 0xFF
#define WS_NO_TEMPERATURE -273.0f

#define TPMS_NO_BATT 0xFF

typedef struct SubGhzBlockGeneric SubGhzBlockGeneric;

struct SubGhzBlockGeneric {
    const char* protocol_name;
    uint64_t data;
    uint64_t data_2;
    uint32_t serial;
    uint16_t data_count_bit;
    uint8_t btn;
    uint32_t cnt;
    uint8_t cnt_2;
    uint32_t seed;
	uint8_t battery_low;
    uint8_t humidity;
	uint32_t timestamp;
	uint8_t channel;
	uint32_t id;
    float temp;
	float pressure;
	float temperature;
	FuriString* result_ric;
    FuriString* result_msg;
};

/**
 * Get name preset.
 * @param preset_name name preset
 * @param preset_str Output name preset
 */
void subghz_block_generic_get_preset_name(const char* preset_name, FuriString* preset_str);

/**
 * Serialize data SubGhzBlockGeneric.
 * @param instance Pointer to a SubGhzBlockGeneric instance
 * @param flipper_format Pointer to a FlipperFormat instance
 * @param preset The modulation on which the signal was received, SubGhzRadioPreset
 * @return Status Error
 */
SubGhzProtocolStatus subghz_block_generic_serialize(
    SubGhzBlockGeneric* instance,
    FlipperFormat* flipper_format,
    SubGhzRadioPreset* preset);

/**
 * Deserialize data SubGhzBlockGeneric.
 * @param instance Pointer to a SubGhzBlockGeneric instance
 * @param flipper_format Pointer to a FlipperFormat instance
 * @return Status Error
 */
SubGhzProtocolStatus subghz_block_generic_deserialize(SubGhzBlockGeneric* instance, FlipperFormat* flipper_format);

SubGhzProtocolStatus subghz_block_generic_deserialize_wheather(SubGhzBlockGeneric* instance, FlipperFormat* flipper_format);

/**
 * Deserialize data SubGhzBlockGeneric.
 * @param instance Pointer to a SubGhzBlockGeneric instance
 * @param flipper_format Pointer to a FlipperFormat instance
 * @param count_bit Count bit protocol
 * @return Status Error
 */
SubGhzProtocolStatus subghz_block_generic_deserialize_check_count_bit(
    SubGhzBlockGeneric* instance,
    FlipperFormat* flipper_format,
    uint16_t count_bit);

#ifdef __cplusplus
}
#endif