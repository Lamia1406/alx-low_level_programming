#include "main.h"
/**
* _calloc - the entry point of the program
* @nmemb : the number of elements in the array
* @size :  the size of each element
* Description : this function  allocates memory for an array, using malloc
* Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < nmemb * size ; i++)
		ptr[i] = 0;
}
