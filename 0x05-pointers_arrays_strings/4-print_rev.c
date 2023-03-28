#include "main.h"
/**
 * print_rev - entry point of the program
 * @s: the input string
 * Description: this program reverses a string and prints the result
 * Return: void
 */
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (i ; i >= 0 ; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}

