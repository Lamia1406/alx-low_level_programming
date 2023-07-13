#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  *str_concat - function that concates two strings
  *@s1 : first string
  *@s2 : second string
  *
  *Return: pointer to array.
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = strlen(s1) + strlen(s2);
	ptr = malloc(size + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		if (i < strlen(s1))
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - strlen(s1)];
	}
	ptr[i] = '\0';
	return (ptr);
}
