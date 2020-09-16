#include "intro.h"
#include "stdbool.h"

volatile int animationRound = 11;
bool intro = true;

void introAnimation(int i) {
	if (i == 10) {
		LCD_SetLocalization( 0x67);
		LCD_SendWord("e");
	} else if (i == 9) {
		LCD_SetLocalization( 0x67);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x66);
		LCD_SendWord("e");

	} else if (i == 8) {
		LCD_SetLocalization( 0x54);
		LCD_SendWord("a");

		LCD_SetLocalization( 0x66);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x65);
		LCD_SendWord("e");
	} else if (i == 7) {
		LCD_SetLocalization( 0x54);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x55);
		LCD_SendWord("a");

		LCD_SetLocalization( 0x14);
		LCD_SendWord("p");
		LCD_SetLocalization( 0x27);
		LCD_SendWord("r");

		LCD_SetLocalization( 0x65);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x64);
		LCD_SendWord("e");
	} else if (i == 6) {
		LCD_SetLocalization( 0x55);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x56);
		LCD_SendWord("a");

		LCD_SetLocalization( 0x64);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x63);
		LCD_SendWord("e");

		LCD_SetLocalization( 0x14);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x27);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x15);
		LCD_SendWord("p");
		LCD_SetLocalization( 0x26);
		LCD_SendWord("r");
	} else if (i == 5) {
		LCD_SetLocalization( 0x56);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x57);
		LCD_SendWord("a");

		LCD_SetLocalization( 0x63);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x62);
		LCD_SendWord("e");

		LCD_SetLocalization( 0x15);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x26);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x16);
		LCD_SendWord("p");
		LCD_SetLocalization( 0x25);
		LCD_SendWord("r");

		LCD_SetLocalization( 0x40);
		LCD_SendWord("S");
		LCD_SetLocalization( 0x53);
		LCD_SendWord("s");

		LCD_SetLocalization( 0x5F);
		LCD_SendWord("v");

		LCD_SetLocalization( 0x5D);
		LCD_SendWord("I");
	} else if (i == 4) {
		LCD_SetLocalization( 0x57);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x58);
		LCD_SendWord("a");

		LCD_SetLocalization( 0x62);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x22);
		LCD_SendWord("e");

		LCD_SetLocalization( 0x16);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x25);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x17);
		LCD_SendWord("p");
		LCD_SetLocalization( 0x24);
		LCD_SendWord("r");
		LCD_SetLocalization( 0x40);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x53);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x41);
		LCD_SendWord("S");
		LCD_SetLocalization( 0x52);
		LCD_SendWord("s");

		LCD_SetLocalization( 0x5A);
		LCD_SendWord("c");
		LCD_SetLocalization( 0x61);
		LCD_SendWord("d");

		LCD_SetLocalization( 0x5F);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x1F);
		LCD_SendWord("v");

		LCD_SetLocalization( 0x5D);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x1D);
		LCD_SendWord("I");
		LCD_SetLocalization( 0x5E);
		LCD_SendWord("n");
	} else if (i == 3) {
		LCD_SetLocalization( 0x58);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x59);
		LCD_SendWord("a");

		LCD_SetLocalization( 0x22);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x4E);
		LCD_SendWord("e");

		LCD_SetLocalization( 0x17);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x24);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x18);
		LCD_SendWord("p");
		LCD_SetLocalization( 0x23);
		LCD_SendWord("r");

		LCD_SetLocalization( 0x41);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x52);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x42);
		LCD_SendWord("S");
		LCD_SetLocalization( 0x51);
		LCD_SendWord("s");

		LCD_SetLocalization( 0x5A);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x61);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x1A);
		LCD_SendWord("c");
		LCD_SetLocalization( 0x21);
		LCD_SendWord("d");

		LCD_SetLocalization( 0x5B);
		LCD_SendWord("e");
		LCD_SetLocalization( 0x60);
		LCD_SendWord("a");

		LCD_SetLocalization( 0x1F);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x4B);
		LCD_SendWord("v");

		LCD_SetLocalization( 0x5E);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x1D);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x49);
		LCD_SendWord("I");
		LCD_SetLocalization( 0x1E);
		LCD_SendWord("n");
	} else if (i == 2) {
		LCD_SetLocalization( 0x59);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x19);
		LCD_SendWord("a");

		LCD_SetLocalization( 0x4E);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x0E);
		LCD_SendWord("e");

		LCD_SetLocalization( 0x18);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x23);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x44);
		LCD_SendWord("p");
		LCD_SetLocalization( 0x4F);
		LCD_SendWord("r");

		LCD_SetLocalization( 0x42);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x51);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x43);
		LCD_SendWord("S");
		LCD_SetLocalization( 0x50);
		LCD_SendWord("s");

		LCD_SetLocalization( 0x1A);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x21);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x46);
		LCD_SendWord("c");
		LCD_SetLocalization( 0x4D);
		LCD_SendWord("d");

		LCD_SetLocalization( 0x5B);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x60);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x1B);
		LCD_SendWord("e");
		LCD_SetLocalization( 0x20);
		LCD_SendWord("a");

		LCD_SetLocalization( 0x4B);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x0B);
		LCD_SendWord("v");

		LCD_SetLocalization( 0x1E);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x49);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x09);
		LCD_SendWord("I");
		LCD_SetLocalization( 0x4A);
		LCD_SendWord("n");
	} else if (i == 1) {
		LCD_SetLocalization( 0x19);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x45);
		LCD_SendWord("a");


		LCD_SetLocalization( 0x44);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x4F);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x43);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x50);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x03);
		LCD_SendWord("S");
		LCD_SetLocalization( 0x10);
		LCD_SendWord("s");

		LCD_SetLocalization( 0x46);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x4D);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x06);
		LCD_SendWord("c");
		LCD_SetLocalization( 0x0D);
		LCD_SendWord("d");

		LCD_SetLocalization( 0x1B);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x20);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x47);
		LCD_SendWord("e");
		LCD_SetLocalization( 0x4C);
		LCD_SendWord("a");

		LCD_SetLocalization( 0x4A);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x0A);
		LCD_SendWord("n");
	} else if (i == 0) {
		LCD_SetLocalization( 0x45);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x05);
		LCD_SendWord("a");

		LCD_SetLocalization( 0x04);
		LCD_SendWord("p");
		LCD_SetLocalization( 0x0F);
		LCD_SendWord("r");

		LCD_SetLocalization( 0x47);
		LCD_SendWord(" ");
		LCD_SetLocalization( 0x4C);
		LCD_SendWord(" ");

		LCD_SetLocalization( 0x07);
		LCD_SendWord("e");
		LCD_SetLocalization( 0x0C);
		LCD_SendWord("a");
	} else if (i == -4) {
		LCD_SetLocalization( 0x48);
		LCD_SendWord("MENU");
	} else if (i == -7) {
		LCD_SetLocalization( 0x14);
		LCD_SendWord("Start");
	} else if (i == -10) {
		LCD_SetLocalization( 0x54);
		LCD_SendWord("Level");

		createInvertedWord("2", 0x67, 1, 0x00);
	}
}
bool introActive = true;

