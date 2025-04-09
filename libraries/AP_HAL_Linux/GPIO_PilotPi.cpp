#include <AP_HAL/AP_HAL_Boards.h>

#include "GPIO_PilotPi.h"

#if CONFIG_HAL_BOARD_SUBTYPE == HAL_BOARD_SUBTYPE_LINUX_PILOTPI

/* taken from /sys/kernel/debug/gpio */
const unsigned Linux::GPIO_Sysfs::pin_table[] = {
    [PILOTPI_GPIO2] = 573,
    [PILOTPI_GPIO3] = 574,
    [PILOTPI_GPIO4] = 575,
    [PILOTPI_GPIO5] = 576,
    [PILOTPI_GPIO6] = 577,
    [PILOTPI_GPIO7] = 578,
    [PILOTPI_GPIO8] = 579,
    [PILOTPI_GPIO9] = 580,
    [PILOTPI_GPIO10] = 581,
    [PILOTPI_GPIO11] = 582,
    [PILOTPI_GPIO12] = 583,
    [PILOTPI_GPIO13] = 584,
    [PILOTPI_GPIO14] = 585,
    [PILOTPI_GPIO15] = 586,
    [PILOTPI_GPIO16] = 587,
    [PILOTPI_GPIO17] = 588,
    [PILOTPI_GPIO18] = 589,
    [PILOTPI_GPIO19] = 590,
    [PILOTPI_GPIO20] = 591,
    [PILOTPI_GPIO21] = 592,
    [PILOTPI_GPIO22] = 593,
    [PILOTPI_GPIO23] = 594,
    [PILOTPI_GPIO24] = 595,
    [PILOTPI_GPIO25] = 596,
    [PILOTPI_GPIO26] = 597,
    [PILOTPI_GPIO27] = 598,
};

const uint8_t Linux::GPIO_Sysfs::n_pins = _PILOTPI_GPIO_MAX;

static_assert(ARRAY_SIZE(Linux::GPIO_Sysfs::pin_table) == _PILOTPI_GPIO_MAX,
              "GPIO pin_table must have the same size of entries in enum gpio_pilotpi");

#endif  // CONFIG_HAL_BOARD_SUBTYPE == HAL_BOARD_SUBTYPE_LINUX_PILOTPI
