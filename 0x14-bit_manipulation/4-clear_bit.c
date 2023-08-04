#include "main.h"
/**
 * clear_bit -function that sets the value of a bit to 0 at a given index
 * @n : unsigned decimal int
 * @index : the index of the bit to switch
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (index != 0 && *n > (unsigned long int)(1 << index))
		*n = *n ^ (1 << index);
	return (1);
}
