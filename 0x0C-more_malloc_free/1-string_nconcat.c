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
	int lenS1 = strlen(s1);
	int lenS2 = strlen(s2);

	if (s1 == NULL)
		lenS1 = 0;
	if (s2 == NULL)
		lenS2 = 0;
	if (n > lenS2)
		n = lenS2;
	concatLen = lenS1 + n;
	ptr = malloc((concatLen + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	strncpy(ptr, s1, lenS1);
	strncat(ptr, s2, n);
	ptr[concatLen] = '\0';
	return (ptr);
}
