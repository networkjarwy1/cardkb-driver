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

### you need to wire the cardkb to I2C bus on esp32, then using menuconfig configure the wiring and you can choose I2C frequncy
### open components directory of your project in terminal and clone the repository
```
git clone https://github.com/networkjarwy1/cardkb-driver.git
```
