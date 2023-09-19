#pragma once

// place overrides here
#define FORCE_NKRO
#ifdef TAPPING_TOGGLE
#    undef TAPPING_TOGGLE
#endif
#define TAPPING_TOGGLE 3
#define USB_POLLING_INTERVAL_MS 1
#undef RGBLIGHT_HUE_STEP
#define RGBLIGHT_HUE_STEP 1
#undef RGBLIGHT_SAT_STEP
#define RGBLIGHT_SAT_STEP 1
#undef RGBLIGHT_VAL_STEP
#define RGBLIGHT_VAL_STEP 1
