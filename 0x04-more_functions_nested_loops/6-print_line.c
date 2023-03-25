#include "main.h"
/**
 * print_line - entry point of the program
 * Description: this program prints a line
 * @n: the length of the line
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int j;

		for (j = 0 ; j < n ; j++)
			putchar('_');
		putchar('\n');
	}
}
