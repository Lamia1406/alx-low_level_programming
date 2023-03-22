#include "main.h"
/**
 *print_alphabet - entry point of the program
 *Description: this program alphabet
 *Return: all alphabets
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i < 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
