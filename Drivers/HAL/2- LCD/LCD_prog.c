/************************************************/
/********* Author: Khadija Naji *****************/
/********* Date  : 29/07/2026   *****************/
/********* File: Program File  *****************/
/************************************************/
#include "STD_Types.h"
#include "Bit_Math.h"
#include <avr/delay.h>

#include "DIO_int.h"
#include "LCD_int.h"
#include "LCD_private.h"
#include "LCD_config.h"


void LCD_voidLCDintializatin(void)
{
	/** 
	FROM DATASHEET
	1- wait 30 ms
	2- send home command // beraga3 el cursur le awel el sater zay alet el ketaba el adema
	3- send command fun set 8 BIT COMMAND      wait 1 ms     wait 1 ms
	4- send display on/off command  wait 1   ms
	5- send display clear command   wait 1.5 ms
	6- send Enty Mode command       
	*/
	_delay_ms(35);// 35 beacouse 30 is the min   //1
	
	LCD_voidSendCommand(LCD_HOME);               //2
	_delay_ms(1);
	
	LCD_voidSendCommand(LCD_FUNCTION_8BIT);      //3
	_delay_ms(1);
	
	LCD_voidSendCommand(LCD_DISPLAYOOF);         //4
	LCD_voidSendCommand(LCD_DISPLAYON);        
	_delay_ms(1);
	
	LCD_voidSendCommand(LCD_CLEAR);              //5
	_delay_ms(2);
	
	LCD_voidSendCommand(LCD_ENTRRY_MODE);        //6
	
}

void LCD_voidSendCommand( u8 u8CMD)
{
	DIO_voidSetPinValue(LCD_RS, LOW);
	DIO_voidSetPinValue(LCD_RW, LOW);
	
	LCD_voidPutonBus(u8CMD);
}
void LCD_voidSendData( u8 u8CMD)
{
	DIO_voidSetPinValue(LCD_RS, HIGH);
	DIO_voidSetPinValue(LCD_RW, LOW);
	
	LCD_voidPutonBus(u8CMD);
	
}

static void LCD_voidPutonBus(u8 u8char)
{
	DIO_voidSetPinValue(LCD_D0 ,GET_BIT(u8CMD),0);
	DIO_voidSetPinValue(LCD_D1 ,GET_BIT(u8CMD),1);
	DIO_voidSetPinValue(LCD_D2 ,GET_BIT(u8CMD),2);
	DIO_voidSetPinValue(LCD_D3 ,GET_BIT(u8CMD),3);
	DIO_voidSetPinValue(LCD_D4 ,GET_BIT(u8CMD),4);
	DIO_voidSetPinValue(LCD_D5 ,GET_BIT(u8CMD),5);
	DIO_voidSetPinValue(LCD_D6 ,GET_BIT(u8CMD),6);
	DIO_voidSetPinValue(LCD_D7 ,GET_BIT(u8CMD),7);
	
	DIO_voidSetPinValue(LCD_EN, HIGH);
	_delay_ms(2);
	DIO_voidSetPinValue(LCD_EN, LOW);
	_delay_ms(2);
}