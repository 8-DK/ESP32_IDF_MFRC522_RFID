/*
 * debug.h
 *
 *  Created on: 28-Sep-2018
 *      Author: Dhananjay
 */

#ifndef MAIN_DEBUG_H_
#define MAIN_DEBUG_H_

#define DEBUG_LOG_ENABLED 1

#ifdef DEBUG_LOG_ENABLED
	#define PF(...) printf(__VA_ARGS__)
#else
	#define PF(...)
#endif


#endif /* MAIN_DEBUG_H_ */
