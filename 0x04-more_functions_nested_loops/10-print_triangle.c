#include "main.h"
#include <ctype.h>
/**
 * print_triangle - entry point of the program
 * @size: the height of the triangle
 * Description: this program returns a triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
		printf("\n");
	else
	{
		int i;
		int j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1; j <= size - i ; j++)
			{
				printf(" ");
			}
			for (j = 1 ; j <= i ; j++)
			{
				printf("%c", '#');
			}
			printf("\n");
		}
	}
}
