// #include "tests.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"

#include "driver/gpio.h"

#include "esp_log.h"
#include "esp_system.h"
#include "semphr.h"
#include "driver/hw_timer.h"
// #include "I2C_UserMod.h"
#include "tests.h"

void app_main(void)
{
    // Unit test of the
    // unitTesti2cMasterInit_(NULL);

    // Integration test
    intergrationTest1(NULL);

    // Verification
    // xTaskCreate(i2cTask_, "i2cTask_", 2048, NULL, 10, NULL);

    // SystemVerificationDriver();

}