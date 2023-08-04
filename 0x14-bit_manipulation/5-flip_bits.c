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
	int i, biggest_p_1 = 0;
	unsigned long int mask = 1UL << 31;

	for (i = 0; i < 32; i++)
	{
		if (results & mask)
		{
			count++;
			biggest_p_1 = 1;
		}
		mask >>= 1;
	}

	return (count);
}
