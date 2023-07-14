#include "main.h"
#include <stdlib.h>
/**
  *_calloc - function to allocate memory for an array
  *@nmemb : number of elements in the array
  *@size : size of the array type
  *
  *Return: pointer to the allocated memory.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
