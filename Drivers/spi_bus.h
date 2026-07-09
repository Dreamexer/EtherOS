#pragma once

#include <stdint.h>

void spi_bus_init(void);

void spi_send_command(uint8_t cmd);

void spi_send_data(const uint8_t *data, uint32_t length);