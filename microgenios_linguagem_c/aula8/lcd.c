// lcd.c

#include "sys.h"
#include "lcd.h"
#include "calc.h"

unsigned char count = 0;

unsigned char lcd_init(void) {
	printf("lcd_init()\n");
	return 0;
}

unsigned char lcd_write(unsigned int value) {
	printf("lcd = %d\n", value);
	return 0;
}

unsigned char lcd_read_count(void) {
	return count;
}
