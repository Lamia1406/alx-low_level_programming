#include "main.h"
#include <stdlib.h>

/**
 * array_range - entry point of the program
 * @min : the minimum value of the range
 * @max : the maximum value of the range
 * Description : this function creates an array of integers
 * Return: int
 */

int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);
	int *ptr;
	int i;

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i <= max - min ; i++)
		ptr[i] = i;
	return (ptr);
}