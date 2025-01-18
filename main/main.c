/* 
 *   main.c
 */
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/i2c_master.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "lsm6ds3.h"
#include "sdkconfig.h"

#define MASK_2_POS(mask) __builtin_ctz(mask)
#define MASK_2_VAL(arg, mask) ((arg&mask)>>MASK_2_POS(mask))
#define BLINK_GPIO CONFIG_BLINK_GPIO

static const char *TAG = "example";
static uint8_t s_led_state = 0;

i2c_master_bus_config_t i2c_mst_config = {
    .clk_source = I2C_CLK_SRC_DEFAULT,
    .i2c_port = I2C_NUM_0,
    .scl_io_num = GPIO_NUM_19,
    .sda_io_num = GPIO_NUM_18,
    .glitch_ignore_cnt = 7,
    .flags.enable_internal_pullup = false
};

i2c_device_config_t dev_cfg = {
    .dev_addr_length = I2C_ADDR_BIT_LEN_7,
    .device_address = 0x6B,
    .scl_speed_hz = 100000,
};

i2c_master_bus_handle_t bus_handle;
i2c_master_dev_handle_t dev_handle;

static void configure_i2c(void){
    ESP_ERROR_CHECK(i2c_new_master_bus(&i2c_mst_config, &bus_handle));
    ESP_ERROR_CHECK(i2c_master_bus_add_device(bus_handle, &dev_cfg, &dev_handle));
    ESP_LOGI(TAG, "I2C Bus successfully configured!");

    uint8_t buf = WHO_AM_I;
    uint8_t buffer;
    ESP_ERROR_CHECK(i2c_master_transmit_receive(dev_handle, &buf, 1, &buffer, 1, -1));
    ESP_LOGI(TAG, "WHO_AM_I: %d", buffer);
    if(buffer != WHO_AM_I_MASK){

    }
}

static void configure_led(void) {
    ESP_LOGI(TAG, "Example configured to blink GPIO LED!");
    gpio_reset_pin(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
}

void app_main(void) {
    configure_led();
    configure_i2c();
   
    while (1) {
        //ESP_LOGI(TAG, "Turning the LED %s!", s_led_state == true ? "ON" : "OFF");
        gpio_set_level(BLINK_GPIO, s_led_state);
        s_led_state = !s_led_state;

        vTaskDelay(CONFIG_BLINK_PERIOD / portTICK_PERIOD_MS);
    }
}
