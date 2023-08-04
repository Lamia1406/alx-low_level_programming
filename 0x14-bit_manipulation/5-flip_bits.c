#include "main.h"
/**
 * flip_bits -function that returns the number of bits you would
 *			need to flip to get from one number to another.
 * @n : first unsigned decimal number
 * @m : second unsigned decimal number
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int results = n ^ m;
	unsigned int count = 0;
	int i;
	unsigned long int mask = 1UL << 63;

	for (i = 0; i < 64; i++)
	{
		if (results & mask)
		{
			count++;
		}
		mask >>= 1;
	}

	return (count);
}
