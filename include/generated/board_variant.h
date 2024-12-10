#pragma once

#include <FastLED.h>

// INFO
#define CX_BOARD_INFO_ID "cx-animate"
#define CX_BOARD_INFO_NAME "ConnectorX Animate"
#define CX_BOARD_INFO_VERSION "1.0.0"
#define CX_BOARD_INFO_USB_VENDOR_ID ""
#define CX_BOARD_INFO_USB_PRODUCT_ID ""
#define CX_BOARD_INFO_USB_DEBUG_PRODUCT_ID ""
#define CX_BOARD_INFO_REGULATOR_OUTPUT_MA 6000.0
#define CX_BOARD_INFO_SKU 00002
#define CX_BOARD_INFO_SERIAL_NUMBER 000000000001

// PINS
#define CX_BOARD_PINS_I2C_1_SDA 14
#define CX_BOARD_PINS_I2C_1_SCL 15
#define CX_BOARD_PINS_SPI_0_TX 19
#define CX_BOARD_PINS_SPI_0_RX 16
#define CX_BOARD_PINS_SPI_0_SCK 18
#define CX_BOARD_PIN_SD_CS 17
#define CX_BOARD_PINS_INDICATOR_LED_ALIVE 26
#define CX_BOARD_PINS_INDICATOR_STATUS_LED_R 23
#define CX_BOARD_PINS_INDICATOR_STATUS_LED_G 24
#define CX_BOARD_PINS_INDICATOR_STATUS_LED_B 25

// FEATURES
#define CX_BOARD_FEATURES_ENABLE_LED 1
#define CX_BOARD_FEATURES_ENABLE_DEVICES 0
#define CX_BOARD_FEATURES_ENABLE_SCREEN 1
#define CX_BOARD_FEATURES_ENABLE_MIC 0
#define CX_BOARD_FEATURES_ENABLE_DIO 0
#define CX_BOARD_FEATURES_ENABLE_AIO 0
#define CX_BOARD_FEATURES_HAS_INDICATORS 1
#define CX_BOARD_FEATURES_HAS_SD_CARD 1

// LED
#define CX_BOARD_LED_POWER_DRAW_MA 60.0
#define CX_BOARD_LED_CHANNEL_COUNT 4
// CHANNEL 1
#define CX_BOARD_LED_CHANNEL_1_KEY "1"
#define CX_BOARD_LED_CHANNEL_1_ENUM_NAME CHAN0
#define CX_BOARD_LED_CHANNEL_1_PIN 22
#define CX_BOARD_LED_CHANNEL_1_ENABLED_PIN 29
#define CX_BOARD_LED_CHANNEL_1_HIDDEN 0
// CHANNEL 2
#define CX_BOARD_LED_CHANNEL_2_KEY "2"
#define CX_BOARD_LED_CHANNEL_2_ENUM_NAME CHAN1
#define CX_BOARD_LED_CHANNEL_2_PIN 20
#define CX_BOARD_LED_CHANNEL_2_ENABLED_PIN 21
#define CX_BOARD_LED_CHANNEL_2_HIDDEN 0
// CHANNEL 3
#define CX_BOARD_LED_CHANNEL_3_KEY "3"
#define CX_BOARD_LED_CHANNEL_3_ENUM_NAME CHAN2
#define CX_BOARD_LED_CHANNEL_3_PIN 2
#define CX_BOARD_LED_CHANNEL_3_ENABLED_PIN 7
#define CX_BOARD_LED_CHANNEL_3_HIDDEN 0
// CHANNEL 4
#define CX_BOARD_LED_CHANNEL_4_KEY "4"
#define CX_BOARD_LED_CHANNEL_4_ENUM_NAME CHAN3
#define CX_BOARD_LED_CHANNEL_4_PIN 6
#define CX_BOARD_LED_CHANNEL_4_ENABLED_PIN 3
#define CX_BOARD_LED_CHANNEL_4_HIDDEN 0


// SCREEN
#define CX_BOARD_SCREEN_I2C_ADDRESS 0x3C
#define CX_BOARD_SCREEN_WIDTH_PX 128
#define CX_BOARD_SCREEN_HEIGHT_PX 64

// DIO

// AIO

// MIC
