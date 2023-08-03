#include <stdio.h>
#include "main.h"

/**
 * print_binary -function that prints an unsigned int in binary format
 * @n : unsigned decimal int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, biggest_p_1 = 0;
	unsigned long int mask = 1UL << 31;

	for (i = 0; i < 32; i++)
	{
		if (n < 2)
		{
			printf("%ld", n);
			break;
		}
		if (n & mask)
		{
			printf("1");
			biggest_p_1 = 1;
		}
		else
		{
			if (biggest_p_1 == 1)
				printf("0");
		}
		mask >>= 1;
	}
}
