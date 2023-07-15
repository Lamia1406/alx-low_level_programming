#include "main.h"
#include <stdlib.h>
/**
  *array_range - function to create an integer array
  *		of values from min to max
  *@min : minimum value
  *@max : maximum value
  *
  *Return: pointer to the array
  */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i <= max - min ; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
