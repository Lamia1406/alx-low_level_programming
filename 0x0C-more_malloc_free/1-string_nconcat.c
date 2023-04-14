#include <stdio.h>
#include "main.h"
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
	int lenS1;
	int lenS2;
	int i, j;

	if (s1 == NULL)
		lenS1 = 0;
	else
		for (lenS1 = 0 ; s1[lenS1] != '\0' ; lenS1++)
			;
	if (s2 == NULL)
		lenS2 = 0;
	else
		for (lenS2 = 0 ; s2[lenS2] != '\0' ; lenS2++)
			;
	if (n > lenS2)
		n = lenS2;
	ptr = malloc((lenS1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < lenS1 ; i++)
		ptr[i] = s1[i];
	for (j = 0 ; j < n ; i++, j++)
		ptr[i] = s2[j];
	ptr[lenS1 + n] = '\0';
	return (ptr);
}
