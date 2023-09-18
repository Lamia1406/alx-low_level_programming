#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words)
 *			or NULL if allocation fails.
 */
char **strtow(char *str)
{
	char **ptr, *word;
	int i, j, word_count = 0;
	char *temp_str = (char *)malloc(sizeof(char) * (strlen(str) + 1));

	strcpy(temp_str, str);
	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != 32  && (i == 0 || str[i - 1] == 32))
			word_count++;
	ptr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (ptr == NULL)
		return (NULL);
	word = strtok(temp_str, " ");
	i = 0;
	while (word != NULL)
	{
		ptr[i] = (char *)malloc(sizeof(char) * (strlen(word) + 1));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			free(temp_str);
			return (NULL);
		}
		strcpy(ptr[i], word);
		i++;
		word = strtok(NULL, " ");
	}
	ptr[i] = NULL;
	free(temp_str);
	return (ptr);
}

