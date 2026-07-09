#include "st7735.h"
#include "spi_bus.h"

void st7735_init(void)
{
    spi_bus_init();

    spi_send_command(0x01);   // SWRESET
    spi_send_command(0x11);   // SLPOUT
    spi_send_command(0x29);   // DISPON
}