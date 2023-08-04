#include "main.h"
/**
 * set_bit -function that sets the value of a bit to 1 at a given index
 * @n : unsigned decimal int
 * @index : the index of the bit to switch
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n < 2)
{
		if (index != 0)
			return (-1);
		if (*n == 0)
			return (1);
	}
	*n = *n + (1 << index);
	return (*n);
}
