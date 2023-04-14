#include <stdio.h>
#include "main.h"
/**
* malloc_checked - the entry point of the program
* @b : the number of bytes of storage to allocate
* Return: void
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
