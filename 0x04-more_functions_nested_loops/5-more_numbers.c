#include "main.h"
/**
 * more_numbers - entry point of the program
 * Description: this program prints numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	char i;
	int j;

	for (j = 0, i = '0' ; j <= 14 ; j++, i++)
	{
		if (j == 10)
			i = '0';
		if (j >= 10)
			putchar('1');
		putchar(i);
	}
	putchar('\n');
}
