#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/spi.h"
#include "hardware/i2c.h"
#include "hardware/pio.h"
#include "pico/cyw43_arch.h"
#include "pins.h"

void init_motor_controllers()
{
    // gpio init enable pins
    gpio_init_mask(ALL_MOTOR_ENABLE_MASK);
    gpio_set_dir_out_masked(ALL_MOTOR_ENABLE_MASK);

    // gpio init input pins
    gpio_init_mask(ALL_MOTOR_INPUT_MASK);
    gpio_set_dir_out_masked(ALL_MOTOR_INPUT_MASK);

    // set all motor enable pins to high
    gpio_set_mask(ALL_MOTOR_ENABLE_MASK);

    // set all motor input pins to low
    gpio_clr_mask(ALL_MOTOR_INPUT_MASK);
}

int main()
{
    stdio_init_all();

    init_motor_controllers();

    puts("Hello, world!");

    return 0;
}
