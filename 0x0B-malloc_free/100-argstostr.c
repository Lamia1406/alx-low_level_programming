#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr- Concatenates an array of strings into a single string.
 * @ac: The number of strings in the array.
 * @av: The array of strings to concatenate.
 * Return: A pointer to the concatenated string,
 *			or NULL if memory allocation fails.
*/
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, length = 0, ptr_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i] != NULL; i++)
		length += strlen(av[i]) + 1;
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[ptr_len] = av[i][j];
			ptr_len++;
		}
		ptr[ptr_len] = '\n';
		ptr_len++;
	}
	ptr[ptr_len] = '\0';
	return (ptr);
}
