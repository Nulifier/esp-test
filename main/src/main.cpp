#include <stdio.h>

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#include <esp_system.h>
#include <esp_log.h>

static const char* TAG = "main";

extern "C" void app_main() {
	ESP_LOGI(TAG, "Started");
}
