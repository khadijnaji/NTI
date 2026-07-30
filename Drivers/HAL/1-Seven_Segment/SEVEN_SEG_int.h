/************************************************/
/********* Author: Khadija Naji *****************/
/********* Date  : 29/07/2026   *****************/
/********* File  : Interface File  **************/
/************************************************/
#ifndef  SEVEN_SEG_INT_H
#define  SEVEN_SEG_INT_H
//#include "STD_Types.h"
/** TO convet between number in decimal to 7 segment code((fist bit for test LED)abcdefg)*/
u8 SevenSegment_u8DecTo7segConvert (u8 decimalNo , u8 testLED_state);
#endif
