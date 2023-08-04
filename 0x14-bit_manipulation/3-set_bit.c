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
	long int temp_n = *n;
	unsigned int binary_digits = 0;

	while (temp_n > 0)
	{
		temp_n /= 2;
		binary_digits++;
	}
	if (binary_digits < index + 1)
		return (-1);
	*n = *n + (1 << index);
	return (1);
}
