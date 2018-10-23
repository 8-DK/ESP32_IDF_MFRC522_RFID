/*
 * myTypeDef.h
 *
 *  Created on: 28-Sep-2018
 *      Author: Dhananjay
 */

#ifndef MAIN_MYTYPEDEF_H_
#define MAIN_MYTYPEDEF_H_


typedef unsigned char Boolean;       /// Boolean variable
typedef char Byte;                /// Signed 8-bit numbers
typedef unsigned char UByte;      /// Unsigned 8-bit numbers
typedef short SWord;               /// Signed 16-bit numbers
typedef unsigned short UWord;     /// Unsigned 16-bit numbers
typedef long DWord;               /// Signed 32-bit numbers
typedef unsigned long UDWord;     /// Unsigned 32-bit numbers
typedef float FWord;				///4 bytes 32-bit numbers 6 decimal places
typedef double FDWord;				///8 bytes 64-bit numbers 15 decimal places

#define SUCCESS				1
#define FAIL				0

#ifndef TRUE
#define TRUE				1
#define FALSE				0
#endif

#define null 0
#define sysToMs	1000

#define ERROR -1
#define ERR_OK 0


#endif /* MAIN_MYTYPEDEF_H_ */
