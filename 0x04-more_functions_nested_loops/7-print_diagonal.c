#include "main.h"
/**
 * print_diagonal - entry point of the program
 * Description: this program prints a diagonal line
 * @n: the length of the line
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		putchar(10);
	else
	{
		int i;
		int j;

			for (j = 0 ; j < n ; j++)
			{
				for (i = 0 ; i <= j ; i++)
					putchar(32);
				putchar('\\');
				putchar(10);
			}
	}
}
