#include "search_algos.h"
/**
 * binary_search - Search for a value in an array of integers
 *		using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to searc for
 *
 * Return: the first index where the value is located
 *	or -1 if value is not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle, i;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return ((int)middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
