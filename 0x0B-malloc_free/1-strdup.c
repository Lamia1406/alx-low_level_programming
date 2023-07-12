#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  *_strdup - function to return a pointer to a newly allocated space in memory
  *@str: pointer to the array we're copying
  *
  *Return: pointer to array.
  */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc((strlen(str) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr = strdup(str);
	return (ptr);

}
