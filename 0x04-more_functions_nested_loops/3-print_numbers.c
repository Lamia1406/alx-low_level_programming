#include "main.h"
/**
 * print_numbers - entry point of the program
 * Description: this program prints numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	putchar(10);
}
