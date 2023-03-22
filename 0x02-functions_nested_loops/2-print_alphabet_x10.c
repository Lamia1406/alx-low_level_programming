#include "main.h"
/**
 *print_alphabet_x10 - entry point of the program
 *Description: this program prints alphabet 10 times
 *Return: all alphabets
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
