#include "main.h"
/**
 * print_square - entry point of the program
 * Description: this program prints a square
 * @size: the height and width of square
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		putchar(10);
	else
	{
		int i;
		int j;

		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
				putchar('#');
			putchar(10);
		}
	}
}
