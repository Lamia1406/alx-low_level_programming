#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  *string_nconcat - function that concates two strings
  *@s1 : first string
  *@s2 : second string
  *@n : number of letters to take from second string
  *
  *Return: pointer to array.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n > strlen(s2))
		n = strlen(s2);
	ptr = malloc(strlen(s1) + n + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0 ; i < strlen(s1) + n + 1 ; i++)
	{
		if (i < strlen(s1))
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - strlen(s1)];
	}
	ptr[i] = '\0';
	return (ptr);
}
