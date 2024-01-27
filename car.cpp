#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/spi.h"
#include "hardware/i2c.h"
#include "hardware/pio.h"
#include "pico/cyw43_arch.h"
#include "pins.h"

int main()
{
    stdio_init_all();

    puts("Hello, world!");

    return 0;
}

void init_motor_controllers()
{
    gpio_init(MOTOR_LEFT_FRONT_ENABLE);
    gpio_set_dir(MOTOR_LEFT_FRONT_ENABLE, GPIO_OUT);
    gpio_init(MOTOR_LEFT_FRONT_INPUT_1);
    gpio_set_dir(MOTOR_LEFT_FRONT_INPUT_1, GPIO_OUT);
    gpio_init(MOTOR_LEFT_FRONT_INPUT_2);
    gpio_set_dir(MOTOR_LEFT_FRONT_INPUT_2, GPIO_OUT);

    gpio_init(MOTOR_LEFT_REAR_ENABLE);
    gpio_set_dir(MOTOR_LEFT_REAR_ENABLE, GPIO_OUT);
    gpio_init(MOTOR_LEFT_REAR_INPUT_1);
    gpio_set_dir(MOTOR_LEFT_REAR_INPUT_1, GPIO_OUT);
    gpio_init(MOTOR_LEFT_REAR_INPUT_2);
    gpio_set_dir(MOTOR_LEFT_REAR_INPUT_2, GPIO_OUT);

    gpio_init(MOTOR_RIGHT_FRONT_ENABLE);
    gpio_set_dir(MOTOR_RIGHT_FRONT_ENABLE, GPIO_OUT);
    gpio_init(MOTOR_RIGHT_FRONT_INPUT_1);
    gpio_set_dir(MOTOR_RIGHT_FRONT_INPUT_1, GPIO_OUT);
    gpio_init(MOTOR_RIGHT_FRONT_INPUT_2);
    gpio_set_dir(MOTOR_RIGHT_FRONT_INPUT_2, GPIO_OUT);

    gpio_init(MOTOR_RIGHT_REAR_ENABLE);
    gpio_set_dir(MOTOR_RIGHT_REAR_ENABLE, GPIO_OUT);
    gpio_init(MOTOR_RIGHT_REAR_INPUT_1);
    gpio_set_dir(MOTOR_RIGHT_REAR_INPUT_1, GPIO_OUT);
    gpio_init(MOTOR_RIGHT_REAR_INPUT_2);
    gpio_set_dir(MOTOR_RIGHT_REAR_INPUT_2, GPIO_OUT);
}
