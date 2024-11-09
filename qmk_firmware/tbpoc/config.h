#pragma once

//#include "config_common.h"

/* USB Device descriptor parameter */
//#define VENDOR_ID       0x5953
//#define PRODUCT_ID      0x0001
//#define DEVICE_VER      0x0001
//#define MANUFACTURER    yubinagasaru
//#define PRODUCT         TBPoC

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 8


// wiring of each half
#define MATRIX_ROW_PINS { GP3, GP2, GP1, GP0}
#define MATRIX_COL_PINS { GP29, GP28, GP27, GP26, GP15, GP14, GP10, GP9 }
#define UNUSED_PINS

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* for PMW3360 */
#define SPI_SCK_PIN GP6
#define SPI_MOSI_PIN GP7
#define SPI_MISO_PIN GP4
#define PMW33XX_CS_PIN GP5 // SPI CS pin.
#define POINTING_DEVICE_INVERT_Y

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
//#define RGB_DI_PIN GP4


//#ifndef RGBLED_NUM
//  #define RGBLED_NUM 80
//#endif

#define RGBLIGHT_ANIMATIONS

#ifndef IOS_DEVICE_ENABLE
  #define RGBLIGHT_LIMIT_VAL 90
  #define RGBLIGHT_VAL_STEP 17
#else
  #define RGBLIGHT_LIMIT_VAL 30
  #define RGBLIGHT_VAL_STEP 4
#endif
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17

#if defined(RGBLIGHT_ENABLE) && !defined(IOS_DEVICE_ENABLE)
// USB_MAX_POWER_CONSUMPTION value for naked48 keyboard
//  120  RGBoff, OLEDoff
//  120  OLED
//  330  RGB 6
//  300  RGB 32
//  310  OLED & RGB 32
  #define USB_MAX_POWER_CONSUMPTION 400
#else
  // fix iPhone and iPad power adapter issue
  // iOS device need lessthan 100
  #define USB_MAX_POWER_CONSUMPTION 100
#endif
