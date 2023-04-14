#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* string_nconcat - the entry point of the program
* @s1: the first string input
* @s2: the second string input
* @n :the number of bytes to copy from s2 to s1
* Description : this function concatenates two strings
* Return: char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int concatLen;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		concatLen = strlen(s1) + strlen(s2);
	else
		concatLen = strlen(s1) + n;
	ptr = malloc((concatLen + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	strncpy(ptr, s1, strlen(s1));
	strncat(ptr, s2, n);
	ptr[concatLen] = '\0';
	return (ptr);
}
