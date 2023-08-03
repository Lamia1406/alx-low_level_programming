#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint -function that converts a binary number to an unsigned int
 * @b : pointer to a string of 0 and 1 chars
 *
 * Return: (unsigned int) decimal format of the number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int p = 0, num = 0, number_digits = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0 ; b[i] ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number_digits++;
	}
	for (i = number_digits - 1 ; i >= 0 ; i--)
	{
		if (b[i] == '0')
		{
			p++;
			continue;
		}
		else
		{
			num += 1 << p;
			p++;
		}
	}

	return (num);
}

