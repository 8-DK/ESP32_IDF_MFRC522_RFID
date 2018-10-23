/*
 * mainApp.c
 *
 *  Created on: 02-Oct-2018
 *      Author: Dhananjay
 */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "esp_timer.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/timers.h"
#include "freertos/semphr.h"

#include "sdkconfig.h"

#include "mainApp.h"
#include "rc522_2.h"

void mainApp(void *pvParameters)
{
	uint8_t taskState = IDEAL;
	while(TRUE)
	{
		vTaskDelay( 10 / portTICK_PERIOD_MS);
		switch(taskState)
		{
		case IDEAL:
			taskState = BLE_TASK;
			break;

		case BLE_TASK:
			taskState = WIFI_TASK;
			break;

		case WIFI_TASK:
			taskState = RFID_TASK;
			break;

		case RFID_TASK:
			initRc522();
			taskState = END_STATE;
			break;

		case END_STATE:
			break;
		}
	}
}

