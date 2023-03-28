#include "main.h"
/**
 * print_most_numbers - entry point of the program
 * Description: this program prints numbers from 0 to 9 except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (i == '2' || i == '4')
			continue;
		putchar(i);
	}
	putchar(10);
}