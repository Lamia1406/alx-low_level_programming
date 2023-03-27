#include "main.h"
/**
 * print_array - entry point of the program
 * @a: the pointer to the first element of the array
 * @n: the length of an array
 * Description: this program prints the elements of an array  using pointers
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

