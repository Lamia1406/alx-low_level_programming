#include "main.h"
#include <stdio.h>
/**
 * get_endianness -function that checks the endianness
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int n = 0x12345678;
	unsigned int *address = &n;

	if (*address == 0x12)
		return (0);
	return (1);
}
