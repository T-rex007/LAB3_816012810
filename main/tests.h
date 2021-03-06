#include "I2C_UserMod.h"

const char *TEST_TAG = "Test";
void unitTesti2cMasterInit_(void *arg)
{
    int ret;
    ret = i2cMasterInit_();
    assert(ret == ESP_OK);
    ESP_LOGI(TEST_TAG, "The Unit Test unitTesti2cMasterInit_ has passed.");
}



void intergrationTest1(void *arg)
{
    int ret;
    ret = i2cMasterADS1115Init_(I2C_EXAMPLE_MASTER_NUM);
    assert(ret == ESP_OK);
    ESP_LOGI(TEST_TAG, "The integration Test intergrationTest1 has passed.");
}



void SystemVerificationDriver(){
    xTaskCreate(i2cTask_, "i2cTask_", 2048, NULL, 10, NULL);
} 