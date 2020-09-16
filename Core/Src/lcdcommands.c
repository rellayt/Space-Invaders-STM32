#include "lcdcommands.h"

void lcd_clear_1()
{
	LCD_SetLocalization(0x00);
	LCD_SendWord("                    ");
}
void lcd_clear_2()
{
	LCD_SetLocalization(0x40);
	LCD_SendWord("                    ");
}
void lcd_clear_3()
{
	LCD_SetLocalization(0x14);
	LCD_SendWord("                    ");
}
void lcd_clear_4()
{
	LCD_SetLocalization(0x54);
	LCD_SendWord("                    ");
}
void lcd_cls()
{
	LCD_SetLocalization(0x00);
	LCD_SendWord("                    ");
	LCD_SetLocalization(0x40);
	LCD_SendWord("                    ");
	LCD_SetLocalization(0x14);
	LCD_SendWord("                    ");
	LCD_SetLocalization(0x54);
	LCD_SendWord("                    ");
}
void lcd_special_cls()
{
	LCD_SetLocalization(0x00);
	LCD_SendWord("                   ");
	LCD_SetLocalization(0x40);
	LCD_SendWord("                    ");
	LCD_SetLocalization(0x14);
	LCD_SendWord("                   ");
	LCD_SetLocalization(0x54);
	LCD_SendWord("                   ");
}
void lcd_clear_1_8_lines()
{
	LCD_SetLocalization(0x00);
	LCD_SendWord("        ");
}
void lcd_clear_2_8_lines()
{
	LCD_SetLocalization(0x40);
	LCD_SendWord("        ");
}
void lcd_clear_3_8_lines()
{
	LCD_SetLocalization(0x14);
	LCD_SendWord("        ");
}
void lcd_clear_4_8_lines()
{
	LCD_SetLocalization(0x54);
	LCD_SendWord("        ");
}

void LCD_SetLocalization(char Loc)
{
	lcd_send_cmd(0x80 | Loc);
}

void LCD_SendWord(char *Word)
{
	while (*Word)
		lcd_send_data(*Word++);
}
