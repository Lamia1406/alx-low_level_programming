#include "main.h"
#include <stdlib.h>
/**
  *malloc_checked - function to allocate memory
  *@b: size of the allocated memory
  *
  *Return: pointer to the allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		return (98);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
