#pragma once

// place overrides here
#define FORCE_NKRO
#ifdef TAPPING_TOGGLE
#    undef TAPPING_TOGGLE
#endif
#define TAPPING_TOGGLE 3
#define USB_POLLING_INTERVAL_MS 1
