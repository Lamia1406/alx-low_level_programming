#include "main.h"
/**
 * swap_int - entry point of the program
 * @a: the first input pointer to int
 * @b: the second input pointer to int
 * Description: this program swaps two variables values  using pointers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

