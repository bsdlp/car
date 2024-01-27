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

    // SPI initialisation. This example will use SPI at 1MHz.
    spi_init(SPI_PORT, 1000 * 1000);
    gpio_set_function(PIN_MISO, GPIO_FUNC_SPI);
    gpio_set_function(PIN_CS, GPIO_FUNC_SIO);
    gpio_set_function(PIN_SCK, GPIO_FUNC_SPI);
    gpio_set_function(PIN_MOSI, GPIO_FUNC_SPI);

    // Chip select is active-low, so we'll initialise it to a driven-high state
    gpio_set_dir(PIN_CS, GPIO_OUT);
    gpio_put(PIN_CS, 1);

    // I2C Initialisation. Using it at 400Khz.
    i2c_init(I2C_PORT, 400 * 1000);

    gpio_set_function(I2C_SDA, GPIO_FUNC_I2C);
    gpio_set_function(I2C_SCL, GPIO_FUNC_I2C);
    gpio_pull_up(I2C_SDA);
    gpio_pull_up(I2C_SCL);

    puts("Hello, world!");

    return 0;
}

void init_motor_controllers()
{
    gpio_init(MOTOR_LEFT_FRONT);
    gpio_set_dir(MOTOR_LEFT_FRONT, GPIO_OUT);
    gpio_init(MOTOR_LEFT_REAR);
    gpio_set_dir(MOTOR_LEFT_REAR, GPIO_OUT);
    gpio_init(MOTOR_RIGHT_FRONT);
    gpio_set_dir(MOTOR_RIGHT_FRONT, GPIO_OUT);
    gpio_init(MOTOR_RIGHT_REAR);
    gpio_set_dir(MOTOR_RIGHT_REAR, GPIO_OUT);
}
