/*
 * lcdcommands.h
 *
 *  Created on: Apr 15, 2020
 *      Author: rella
 */

#ifndef INC_LCDCOMMANDS_H_
#define INC_LCDCOMMANDS_H_


void lcd_clear_1();
void lcd_clear_2();
void lcd_clear_3();
void lcd_clear_4();
void lcd_cls();
void lcd_clear_1_8_lines();
void lcd_clear_2_8_lines();
void lcd_clear_3_8_lines();
void lcd_clear_4_8_lines();
void lcd_special_cls();
void LCD_SetLocalization(char Loc);
void LCD_SendWord(char *Word);
#endif /* INC_LCDCOMMANDS_H_ */
