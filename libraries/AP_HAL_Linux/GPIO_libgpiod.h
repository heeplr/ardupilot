#pragma once

#include "AP_HAL_Linux.h"
#include <AP_HAL/HAL.h>

#include "GPIO.h"

#if HAL_LINUX_GPIO_LIBGPIOD_ENABLED

#include <stdexcept>
#include <unordered_map>
#include <stdint.h>


namespace Linux {

#include <gpiod.h>

    class GPIO_libgpiod {
        public:
            GPIO_libgpiod(const std::string& chipname = "gpiochip0");
            ~GPIO_libgpiod();
        
            void init();
            void pinMode(unsigned int pin, bool is_output, int default_value = 0);
            int read(unsigned int pin);
            void write(unsigned int pin, int value);
            void toggle(unsigned int pin);
            void set_pull(unsigned int pin, int pull);
            void attach_interrupt(unsigned int pin, void (*handler)(int), int edge);
        
        private:
            struct gpiod_chip* chip;
            std::unordered_map<unsigned int, struct gpiod_line*> lines;
        };

}

#endif  // HAL_LINUX_GPIO_LIBGPIOD_ENABLED
