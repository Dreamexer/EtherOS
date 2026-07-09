#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "display.h"

void app_main(void)
{
    printf("EtherOS booting...\n");

    display_init();
    display_clear();
    display_splash();

    while (1)
    {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}