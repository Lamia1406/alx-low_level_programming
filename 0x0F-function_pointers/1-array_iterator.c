#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as
 *			a parameter on each element of an array.
 * @array: array
 * @size: size of array
 * @action: the functionality to be accomplished
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
