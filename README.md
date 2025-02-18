# driver for M5stack cardkb I2C keyboard
## usage
```c
#include "freertos/FreeRTOS.h"
#include "cardkb.h"

void app_main() {
    cardKB_init();

    while (1) {
        char key = cardkb_read_key();
        if (key) {
        }
        vTaskDelay(pdMS_TO_TICKS(200));
    }
}
```

### you need to wire the cardkb to I2C bus on esp32, then using menuconfig configurate how its wired and you can choose I2C frequncy
