#include "GPIO_libgpiod.h"
#include <AP_HAL/AP_HAL.h>

#if HAL_LINUX_GPIO_LIBGPIOD_ENABLED


using namespace Linux;

extern const AP_HAL::HAL& hal;


GPIO_libgpiod::GPIO_libgpiod(const std::string& chipname) {
    chip = gpiod_chip_open_by_name(chipname.c_str());
    if (!chip) {
        throw std::runtime_error("Failed to open GPIO chip");
    }
}

GPIO_libgpiod::~GPIO_libgpiod() {
    for (auto& pair : lines) {
        gpiod_line_release(pair.second);
    }
    gpiod_chip_close(chip);
}



#endif  // HAL_LINUX_GPIO_libgpiod_ENABLED
