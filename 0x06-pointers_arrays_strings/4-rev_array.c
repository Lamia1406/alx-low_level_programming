#include "main.h"
#include <stdio.h>
/**
 * reverse_array - entry point of the program
 * @a: the input array
 * @n: the length of an array
 * Description: this program reverses an array
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0 ; i < 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
