/************************************************/
/********* Author: Khadija Naji *****************/
/********* Date  : 29/07/2026   *****************/
/********* File  : Private File  **************/
/************************************************/

#ifndef  LCD_PRIVATE_H
#define  LCD_PRIVATE_H

#define LCD_CLEAR            0X01
#define LCD_HOME             0x02 //SET CURSER TO FISRT POSITION_FIRST LINE , FISRT CHAR
#define LCD_ENTRRY_MODE      0X06
#define LCD_DISPLAYOOF       0X08
#define LCD_DISPLAYON        0X0C
#define LCD_FUNCTION_RESET   0X30 //RESET LED 
#define LCD_FUNCTION_8BIT    0X38 //SMALL THE SIZE OF DISPLAYED CHAR , 2 LINE DISPLAY ; CHAR-->5*7 INSTED OF 5*10
#define LCD_SETCURSER        0X80 //SET CURSER POSITION

static void LCD_voidPutonBus(u8 u8char);

#endif
