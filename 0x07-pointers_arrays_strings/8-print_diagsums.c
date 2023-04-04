#include "main.h"
/**
 * print_diagsums - entry point of the program
 * @a: a square matrix
 * @size: the size of the matrix
 * Description: this program prints the sum of the two
 *		diagonals of a square matrix of integers.
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int c = 0;

	for (i = 0, j = 0 ; i < size * size ; i = i + size, j++)
	{
		c = c + *(a + i + j);
	}
	printf("%d, ", c);
	c = 0;
	for (j = 1 ; j <= size ; j++)
	{
		c = c + *(a + size * j - j);
	}
	printf("%d\n", c);
}

