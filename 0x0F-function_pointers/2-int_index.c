#include <stddef.h>
/**
* int_index - function that searches for an integer
* @array: array
* @size: size of the array
* @cmp: function pointer
* Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int results = 0;

	if (size == 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		results = cmp(array[i]);
		if (results > 0)

			return (i);
	}
	return (-1);
}
