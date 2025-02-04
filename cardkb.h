/*
Written by Jaroslav Vizner in January 2025
Don't change anything if you don't know what are you doing.
*/

#define I2C_MASTER_SCL_IO    CONFIG_I2C_MASTER_SCL_IO
#define I2C_MASTER_SDA_IO    CONFIG_I2C_MASTER_SDA_IO
#define I2C_MASTER_NUM       I2C_NUM_0
#define I2C_MASTER_FREQ_HZ   CONFIG_I2C_MASTER_FREQ_HZ
#define I2C_MASTER_TX_BUF_DISABLE 0x0
#define I2C_MASTER_RX_BUF_DISABLE 0x0
#define CARDKB_ADDR          CONFIG_CARDKB_ADDR

static const char *TAG = "CardKB";

void cardKB_init();
char cardkb_read_key();
