#include "main.h"

/**
 * get_bit -function that returns the value of a bit at a given index
 * @n : unsigned decimal int
 * @index : the index of the wanted bit
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, res;

	if (index > 64)
		return (-1);
	for (i = 0; i <= index ; i++)
	{
		res = n % 2;
		n /= 2;
	}
	return (res);
}
