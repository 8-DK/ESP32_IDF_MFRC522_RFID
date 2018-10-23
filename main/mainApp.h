/*
 * mainApp.h
 *
 *  Created on: 02-Oct-2018
 *      Author: Dhananjay
 */

#ifndef MAIN_MAINAPP_H_
#define MAIN_MAINAPP_H_
#include "myTypeDef.h"

enum EMTASKSTATE{
	IDEAL  = 0,
	RFID_TASK,
	BLE_TASK,
	WIFI_TASK,
	END_STATE
};

void mainApp(void *pvParameters);



#endif /* MAIN_MAINAPP_H_ */
