#pragma once

#include <stdint.h>

void st7735_init(void);

void st7735_write_command(uint8_t cmd);

void st7735_write_data(const uint8_t *data, uint32_t length);