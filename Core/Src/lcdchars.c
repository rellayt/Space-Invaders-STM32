#include "stdbool.h"
#include "lcdchars.h"

//INVERTED CHARACTERS
//UPPERCASE
unsigned char A1[] = { 0x11, 0x0E, 0x0E, 0x0E, 0x00, 0x0E, 0x0E, 0x1F };
unsigned char B1[] = { 0x01, 0x0E, 0x0E, 0x01, 0x0E, 0x0E, 0x01, 0x1F };
unsigned char C1[] = { 0x11, 0x0E, 0x0F, 0x0F, 0x0F, 0x0E, 0x11, 0x1F };
unsigned char D1[] = { 0x03, 0x0D, 0x0E, 0x0E, 0x0E, 0x0D, 0x03, 0x1F };
unsigned char E1[] = { 0x00, 0x0F, 0x0F, 0x01, 0x0F, 0x0F, 0x00, 0x1F };
unsigned char F1[] = { 0x00, 0x0F, 0x0F, 0x01, 0x0F, 0x0F, 0x0F, 0x1F };
unsigned char G1[] = { 0x11, 0x0E, 0x0F, 0x08, 0x0E, 0x0E, 0x10, 0x1F };
unsigned char H1[] = { 0x0E, 0x0E, 0x0E, 0x00, 0x0E, 0x0E, 0x0E, 0x1F };
unsigned char I1[] = { 0x11, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x11, 0x1F };
unsigned char J1[] = { 0x18, 0x1D, 0x1D, 0x1D, 0x1D, 0x0D, 0x13, 0x1F };
unsigned char K1[] = { 0x0E, 0x0D, 0x0B, 0x07, 0x0B, 0x0D, 0x0E, 0x1F };
unsigned char L1[] = { 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0x1F };
unsigned char M1[] = { 0x0E, 0x04, 0x0A, 0x0A, 0x0E, 0x0E, 0x0E, 0x1F };
unsigned char N1[] = { 0x0E, 0x0E, 0x06, 0x0A, 0x0C, 0x0E, 0x0E, 0x1F };
unsigned char O1[] = { 0x11, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x11, 0x1F };
unsigned char P1[] = { 0x01, 0x0E, 0x0E, 0x01, 0x0F, 0x0F, 0x0F, 0x1F };
unsigned char R1[] = { 0x01, 0x0E, 0x0E, 0x01, 0x0B, 0x0D, 0x0E, 0x1F };
unsigned char S1[] = { 0x10, 0x0F, 0x0F, 0x11, 0x1E, 0x1E, 0x01, 0x1F };
unsigned char T1[] = { 0x00, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1F };
unsigned char U1[] = { 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x11, 0x1F };
unsigned char W1[] = { 0x0E, 0x0E, 0x0E, 0x0A, 0x0A, 0x0A, 0x15, 0x1F };
unsigned char X1[] = { 0x0E, 0x0E, 0x15, 0x1B, 0x15, 0x0E, 0x0E, 0x1F };
unsigned char Y1[] = { 0x0E, 0x0E, 0x0E, 0x15, 0x1B, 0x1B, 0x1B, 0x1F };
unsigned char Z1[] = { 0x00, 0x1E, 0x1D, 0x1B, 0x17, 0x0F, 0x00, 0x1F };
unsigned char V1[] = { 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x15, 0x1B, 0x1F };

//LOWCASE
unsigned char A2[] = { 0x1F, 0x1F, 0x11, 0x1E, 0x10, 0x0E, 0x10, 0x1F };
unsigned char B2[] = { 0x0F, 0x0F, 0x09, 0x06, 0x0E, 0x0E, 0x01, 0x1F };
unsigned char C2[] = { 0x1F, 0x1F, 0x11, 0x0F, 0x0F, 0x0E, 0x11, 0x1F };
unsigned char D2[] = { 0x1E, 0x1E, 0x12, 0x0C, 0x0E, 0x0E, 0x10, 0x1F };
unsigned char E2[] = { 0x1F, 0x1F, 0x11, 0x0E, 0x00, 0x0F, 0x11, 0x1F };
unsigned char F2[] = { 0x19, 0x16, 0x17, 0x03, 0x17, 0x17, 0x17, 0x1F };
unsigned char G2[] = { 0x1F, 0x10, 0x0E, 0x0E, 0x10, 0x1E, 0x11, 0x1F };
unsigned char H2[] = { 0x0F, 0x0F, 0x09, 0x06, 0x0E, 0x0E, 0x0E, 0x1F };
unsigned char I2[] = { 0x1B, 0x1F, 0x13, 0x1B, 0x1B, 0x1B, 0x11, 0x1F };
unsigned char J2[] = { 0x1D, 0x1F, 0x19, 0x1D, 0x1D, 0x0D, 0x13, 0x1F };
unsigned char K2[] = { 0x0F, 0x0F, 0x0D, 0x0B, 0x07, 0x0B, 0x0D, 0x1F };
unsigned char L2[] = { 0x13, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x11, 0x1F };
unsigned char M2[] = { 0x1F, 0x1F, 0x05, 0x0A, 0x0A, 0x0E, 0x0E, 0x1F };
unsigned char N2[] = { 0x1F, 0x1F, 0x09, 0x06, 0x0E, 0x0E, 0x0E, 0x1F };
unsigned char O2[] = { 0x1F, 0x1F, 0x11, 0x0E, 0x0E, 0x0E, 0x11, 0x1F };
unsigned char P2[] = { 0x1F, 0x1F, 0x01, 0x0E, 0x01, 0x0F, 0x0F, 0x1F };
unsigned char R2[] = { 0x1F, 0x1F, 0x09, 0x06, 0x0F, 0x0F, 0x0F, 0x1F };
unsigned char S2[] = { 0x1F, 0x1F, 0x11, 0x0F, 0x11, 0x1E, 0x01, 0x1F };
unsigned char T2[] = { 0x17, 0x17, 0x03, 0x17, 0x17, 0x16, 0x19, 0x1F };
unsigned char U2[] = { 0x1F, 0x1F, 0x0E, 0x0E, 0x0E, 0x0C, 0x12, 0x1F };
unsigned char W2[] = { 0x1F, 0x1F, 0x0E, 0x0E, 0x0A, 0x0A, 0x15, 0x1F };
unsigned char X2[] = { 0x1F, 0x1F, 0x0E, 0x15, 0x1B, 0x15, 0x0E, 0x1F };
unsigned char Y2[] = { 0x1F, 0x1F, 0x0E, 0x0E, 0x10, 0x1E, 0x11, 0x1F };
unsigned char Z2[] = { 0x1F, 0x1F, 0x00, 0x1D, 0x1B, 0x17, 0x00, 0x1F };
unsigned char V2[] = { 0x1F, 0x1F, 0x0E, 0x0E, 0x0E, 0x15, 0x1B, 0x1F };
unsigned char downArrow[] = { 0x00, 0x04, 0x04, 0x04, 0x04, 0x1F, 0x0E, 0x04 };
unsigned char upArrow[] = { 0x04, 0x0E, 0x1F, 0x04, 0x04, 0x04, 0x04, 0x04 };
unsigned char Space[] = { 0x00, 0x00, 0x00, 0x00, 0x04, 0x0E, 0x1F, 0x15 };
unsigned char shootingSpace_1_1[] = { 0x00, 0x00, 0x00, 0x00, 0x02, 0x07, 0x0F,
		0x0A };
unsigned char shootingSpace_2_1[] = { 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x07,
		0x05 };
unsigned char shootingSpace_3_1[] = { 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x03,
		0x02 };
unsigned char shootingSpace_4_1[] = { 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01,
		0x01 };
unsigned char shootingSpace_5_1[] = { 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00 };
unsigned char shootingSpace_1_2[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10,
		0x10 };
unsigned char shootingSpace_2_2[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18,
		0x08 };
unsigned char shootingSpace_3_2[] = { 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x1C,
		0x14 };
unsigned char shootingSpace_4_2[] = { 0x00, 0x00, 0x00, 0x00, 0x08, 0x1C, 0x1E,
		0x0A };
unsigned char enemyRight[] = { 0x10, 0x18, 0x1C, 0x16, 0x1E, 0x14, 0x02, 0x04 };
unsigned char enemyLeft[] = { 0x01, 0x03, 0x07, 0x0D, 0x0F, 0x05, 0x08, 0x04 };
unsigned char enemyLeft2[] = { 0x01, 0x03, 0x07, 0x0D, 0x0F, 0x05, 0x04, 0x08 };
unsigned char enemyRight2[] = { 0x10, 0x18, 0x1C, 0x16, 0x1E, 0x14, 0x04, 0x02 };
unsigned char enemyLeft3[] = { 0x01, 0x03, 0x07, 0x0D, 0x0F, 0x05, 0x04, 0x09 };
unsigned char enemyLeft4[] = { 0x01, 0x03, 0x07, 0x0D, 0x0F, 0x05, 0x05, 0x08 };

unsigned char enemy2Left[] = { 0x04, 0x02, 0x07, 0x0D, 0x1F, 0x17, 0x14, 0x06 };
unsigned char enemy2Left2[] = { 0x02, 0x01, 0x03, 0x06, 0x0F, 0x0B, 0x0A, 0x03 };
unsigned char enemy2Left3[] = { 0x01, 0x00, 0x01, 0x03, 0x07, 0x05, 0x05, 0x01 };
unsigned char enemy2Left4[] = { 0x00, 0x00, 0x00, 0x01, 0x03, 0x02, 0x02, 0x00 };
unsigned char enemy2Left5[] = { 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00 };

unsigned char enemy2Right[] = { 0x04, 0x08, 0x1C, 0x16, 0x1F, 0x1D, 0x05, 0x0C };
unsigned char enemy2Right2[] =
		{ 0x02, 0x04, 0x1E, 0x1B, 0x1F, 0x1E, 0x02, 0x06 };
unsigned char enemy2Right3[] =
		{ 0x01, 0x12, 0x1F, 0x0D, 0x1F, 0x1F, 0x01, 0x13 };
unsigned char enemy2Right4[] =
		{ 0x10, 0x09, 0x1F, 0x16, 0x1F, 0x1F, 0x10, 0x19 };
unsigned char enemy2Right5[] =
		{ 0x08, 0x04, 0x0F, 0x1B, 0x1F, 0x0F, 0x08, 0x0C };

unsigned char enemy3Right[] = { 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x00 };
unsigned char enemy3Right2[] =
		{ 0x00, 0x00, 0x00, 0x10, 0x18, 0x08, 0x08, 0x00 };
unsigned char enemy3Right3[] =
		{ 0x10, 0x00, 0x10, 0x18, 0x1C, 0x14, 0x14, 0x10 };
unsigned char enemy3Right4[] =
		{ 0x08, 0x10, 0x18, 0x0C, 0x1E, 0x1A, 0x0A, 0x18 };

unsigned char ienemy2Left[] = { 0x04, 0x02, 0x07, 0x0D, 0x1F, 0x17, 0x14, 0x0C };
unsigned char ienemy2Left2[] =
		{ 0x02, 0x01, 0x03, 0x06, 0x0F, 0x0B, 0x0A, 0x06 };
unsigned char ienemy2Left3[] =
		{ 0x01, 0x00, 0x01, 0x03, 0x07, 0x05, 0x05, 0x03 };
unsigned char ienemy2Left4[] =
		{ 0x00, 0x00, 0x00, 0x01, 0x03, 0x02, 0x02, 0x01 };
unsigned char ienemy2Left5[] =
		{ 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00 };

unsigned char ienemy2Right[] =
		{ 0x04, 0x08, 0x1C, 0x16, 0x1F, 0x1D, 0x05, 0x06 };
unsigned char ienemy2Right2[] =
		{ 0x02, 0x04, 0x1E, 0x1B, 0x1F, 0x1E, 0x02, 0x03 };
unsigned char ienemy2Right3[] =
		{ 0x01, 0x12, 0x1F, 0x0D, 0x1F, 0x1F, 0x01, 0x01 };
unsigned char ienemy2Right4[] =
		{ 0x10, 0x09, 0x1F, 0x16, 0x1F, 0x1F, 0x10, 0x10 };
unsigned char ienemy2Right5[] =
		{ 0x08, 0x04, 0x0F, 0x1B, 0x1F, 0x0F, 0x08, 0x18 };

unsigned char ienemy3Right[] =
		{ 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x00 };
unsigned char ienemy3Right2[] =
		{ 0x00, 0x00, 0x00, 0x10, 0x18, 0x08, 0x08, 0x10 };
unsigned char ienemy3Right3[] =
		{ 0x10, 0x00, 0x10, 0x18, 0x1C, 0x14, 0x14, 0x18 };
unsigned char ienemy3Right4[] =
		{ 0x08, 0x10, 0x18, 0x0C, 0x1E, 0x1A, 0x0A, 0x0C };
unsigned char line[] = { 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04 };
unsigned char left_arrow[] = { 0x00, 0x04, 0x0C, 0x1F, 0x0C, 0x04, 0x00, 0x00 };

void createChar(char Loc, unsigned char Symbol[], int Index) {
	lcd_create_char(Symbol, Index);
	LCD_SetLocalization( Loc);
	lcd_send_data(Index);
}

void createInvertedWord(char Word[], char Loc, int Length, int Index,
		int Section) {
	char Inc = 0x01;
	char Symbol;
	bool passed = false;
	for (int i = 0; i < Length; i++) {
		Index++;
		if (Index == 8)
			Index = 0;
		if (passed) {
			Loc += Inc;
			passed = false;
		}
		Symbol = Word[i];
		if (Section == 0) {
			switch (Symbol) {
			case 'a':
				createChar(Loc, A2, Index);
				passed = true;
				break;
			case 'b':
				createChar(Loc, B2, Index);
				passed = true;
				break;
			case 'c':
				createChar(Loc, C2, Index);
				passed = true;
				break;
			case 'd':
				createChar(Loc, D2, Index);
				passed = true;
				break;
			case 'e':
				createChar(Loc, E2, Index);
				passed = true;
				break;
			case 'f':
				createChar(Loc, F2, Index);
				passed = true;
				break;
			case 'g':
				createChar(Loc, G2, Index);
				passed = true;
				break;
			case 'h':
				createChar(Loc, H2, Index);
				passed = true;
				break;
			case 'i':
				createChar(Loc, I2, Index);
				passed = true;
				break;
			case 'j':
				createChar(Loc, J2, Index);
				passed = true;
				break;
			case 'k':
				createChar(Loc, K2, Index);
				passed = true;
				break;
			case 'l':
				createChar(Loc, L2, Index);
				passed = true;
				break;
			case 'm':
				createChar(Loc, M2, Index);
				passed = true;
				break;
			case 'n':
				createChar(Loc, N2, Index);
				passed = true;
				break;
			case 'o':
				createChar(Loc, O2, Index);
				passed = true;
				break;
			case 'p':
				createChar(Loc, P2, Index);
				passed = true;
				break;
			case 'r':
				createChar(Loc, R2, Index);
				passed = true;
				break;
			case 's':
				createChar(Loc, S2, Index);
				passed = true;
				break;
			case 't':
				createChar(Loc, T2, Index);
				passed = true;
				break;
			case 'u':
				createChar(Loc, U2, Index);
				passed = true;
				break;
			case 'w':
				createChar(Loc, W2, Index);
				passed = true;
				break;
			case 'x':
				createChar(Loc, X2, Index);
				passed = true;
				break;
			case 'y':
				createChar(Loc, Y2, Index);
				passed = true;
				break;
			case 'z':
				createChar(Loc, Z2, Index);
				passed = true;
				break;
			case 'v':
				createChar(Loc, V2, Index);
				passed = true;
				break;
			case 'A':
				createChar(Loc, A1, Index);
				passed = true;
				break;
			case 'B':
				createChar(Loc, B1, Index);
				passed = true;
				break;
			case 'C':
				createChar(Loc, C1, Index);
				passed = true;
				break;
			case 'D':
				createChar(Loc, D1, Index);
				passed = true;
				break;
			case 'E':
				createChar(Loc, E1, Index);
				passed = true;
				break;
			case 'F':
				createChar(Loc, F1, Index);
				passed = true;
				break;
			case 'G':
				createChar(Loc, G1, Index);
				passed = true;
				break;
			case 'H':
				createChar(Loc, H1, Index);
				passed = true;
				break;
			case 'I':
				createChar(Loc, T1, Index);
				passed = true;
				break;
			case 'J':
				createChar(Loc, J1, Index);
				passed = true;
				break;
			case 'K':
				createChar(Loc, K1, Index);
				passed = true;
				break;
			case 'L':
				createChar(Loc, L1, Index);
				passed = true;
				break;
			case 'M':
				createChar(Loc, M1, Index);
				passed = true;
				break;
			case 'N':
				createChar(Loc, N1, Index);
				passed = true;
				break;
			case 'O':
				createChar(Loc, O1, Index);
				passed = true;
				break;
			case 'P':
				createChar(Loc, P1, Index);
				passed = true;
				break;
			case 'R':
				createChar(Loc, R1, Index);
				passed = true;
				break;
			case 'S':
				createChar(Loc, S1, Index);
				passed = true;
				break;
			case 'T':
				createChar(Loc, T1, Index);
				passed = true;
				break;
			case 'U':
				createChar(Loc, U1, Index);
				passed = true;
				break;
			case 'W':
				createChar(Loc, W1, Index);
				passed = true;
				break;
			case 'X':
				createChar(Loc, X1, Index);
				passed = true;
				break;
			case 'Y':
				createChar(Loc, Y1, Index);
				passed = true;
				break;
			case 'Z':
				createChar(Loc, Z1, Index);
				passed = true;
				break;
			case '2':
				createChar(Loc, downArrow, Index);
				passed = true;
				break;
			case '8':
				createChar(Loc, upArrow, Index);
				passed = true;
				break;
			case 'V':
				createChar(Loc, V1, Index);
				passed = true;
				break;
			case '1':
				createChar(Loc, Space, Index);
				passed = true;
				break;
			default:
				break;
			}
		} else if (Section == 1) {
			switch (Symbol) {
			case 'S':
				createChar(Loc, Space, Index);
				passed = true;
				break;
			case '1':
				createChar(Loc, shootingSpace_1_1, Index);
				passed = true;
				break;
			case '2':
				createChar(Loc, shootingSpace_2_1, Index);
				passed = true;
				break;
			case '3':
				createChar(Loc, shootingSpace_3_1, Index);
				passed = true;
				break;
			case '4':
				createChar(Loc, shootingSpace_4_1, Index);
				passed = true;
				break;
			case '5':
				createChar(Loc, shootingSpace_5_1, Index);
				passed = true;
				break;
			case '6':
				createChar(Loc, shootingSpace_1_2, Index);
				passed = true;
				break;
			case '7':
				createChar(Loc, shootingSpace_2_2, Index);
				passed = true;
				break;
			case '8':
				createChar(Loc, shootingSpace_3_2, Index);
				passed = true;
				break;
			case '9':
				createChar(Loc, shootingSpace_3_2, Index);
				passed = true;
				break;
			case 'L':
				createChar(Loc, enemyLeft, Index);
				passed = true;
				break;
			case 'R':
				createChar(Loc, enemyRight, Index);
				passed = true;
				break;
			case 'A':
				createChar(Loc, enemyRight2, Index);
				passed = true;
				break;
			case 'B':
				createChar(Loc, enemyLeft2, Index);
				passed = true;
				break;
			case 'C':
				createChar(Loc, enemyLeft3, Index);
				passed = true;
				break;
			case 'D':
				createChar(Loc, enemyLeft4, Index);
				passed = true;
				break;
			case 'a':
				createChar(Loc, enemy2Left, Index);
				passed = true;
				break;
			case 'b':
				createChar(Loc, enemy2Left2, Index);
				passed = true;
				break;
			case 'c':
				createChar(Loc, enemy2Left3, Index);
				passed = true;
				break;
			case 'd':
				createChar(Loc, enemy2Left4, Index);
				passed = true;
				break;
			case 'e':
				createChar(Loc, enemy2Left5, Index);
				passed = true;
				break;
			case 'f':
				createChar(Loc, enemy2Right, Index);
				passed = true;
				break;
			case 'g':
				createChar(Loc, enemy2Right2, Index);
				passed = true;
				break;
			case 'h':
				createChar(Loc, enemy2Right3, Index);
				passed = true;
				break;
			case 'i':
				createChar(Loc, enemy2Right4, Index);
				passed = true;
				break;
			case 'j':
				createChar(Loc, enemy2Right5, Index);
				passed = true;
				break;
			case 'k':
				createChar(Loc, enemy3Right, Index);
				passed = true;
				break;
			case 'l':
				createChar(Loc, enemy3Right2, Index);
				passed = true;
				break;
			case 'm':
				createChar(Loc, enemy3Right3, Index);
				passed = true;
				break;
			case 'n':
				createChar(Loc, enemy3Right4, Index);
				passed = true;
				break;
			default:
				break;
			}
		} else if (Section == 2) {
			switch (Symbol) {
			case '1':
				createChar(Loc, ienemy2Left, Index);
				passed = true;
				break;
			case '2':
				createChar(Loc, ienemy2Left2, Index);
				passed = true;
				break;
			case '3':
				createChar(Loc, ienemy2Left3, Index);
				passed = true;
				break;
			case '4':
				createChar(Loc, ienemy2Left4, Index);
				passed = true;
				break;
			case '5':
				createChar(Loc, ienemy2Left5, Index);
				passed = true;
				break;
			case '6':
				createChar(Loc, ienemy2Right, Index);
				passed = true;
				break;
			case '7':
				createChar(Loc, ienemy2Right2, Index);
				passed = true;
				break;
			case '8':
				createChar(Loc, ienemy2Right3, Index);
				passed = true;
				break;
			case '9':
				createChar(Loc, ienemy2Right4, Index);
				passed = true;
				break;
			case '0':
				createChar(Loc, ienemy2Right5, Index);
				passed = true;
				break;
			case 'A':
				createChar(Loc, ienemy3Right, Index);
				passed = true;
				break;
			case 'B':
				createChar(Loc, ienemy3Right2, Index);
				passed = true;
				break;
			case 'C':
				createChar(Loc, ienemy3Right3, Index);
				passed = true;
				break;
			case 'D':
				createChar(Loc, ienemy3Right4, Index);
				passed = true;
				break;
			case 'l':
				createChar(Loc, line, Index);
				passed = true;
				break;
			case 'o':
				createChar(Loc, left_arrow, Index);
				passed = true;
				break;
			default:
				break;
			}
		}
	}
}
