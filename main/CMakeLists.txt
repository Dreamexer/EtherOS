idf_component_register(
    SRCS
        "EtherOS.c"

        "../Core/board.c"
        "../Core/kernel.c"

        "../Drivers/display.c"
        "../Drivers/st7735.c"
        "../Drivers/spi_bus.c"
        "../Drivers/wifi.c"
        "../Drivers/sdcard.c"

        "../Services/plugin_manager.c"

        "../Web/webserver.c"

    INCLUDE_DIRS
        "."
        "../Core"
        "../Drivers"
        "../Services"
        "../Web"
)