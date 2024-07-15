#include "search_algos.h"
/**
 * linear_search - Searche for a value in an array of integers
 *		using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to searc for
 *
 * Return: the first index where the value is located
 *	or -1 if value is not present or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);

}
