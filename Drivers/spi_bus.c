#include "spi_bus.h"

#include <stdio.h>

void spi_bus_init(void)
{
    printf("SPI BUS: init\n");
}

void spi_send_command(uint8_t cmd)
{
    printf("SPI CMD: 0x%02X\n", cmd);
}

void spi_send_data(const uint8_t *data, uint32_t length)
{
    printf("SPI DATA: %lu bytes\n", (unsigned long)length);
}