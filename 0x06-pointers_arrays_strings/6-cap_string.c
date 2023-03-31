#include "main.h"
#include <stdio.h>
/**
 * cap_string - entry point of the program
 * @str: the input string
 * Description: this program capitalizes the words
 * Return: char
 */
char *cap_string(char *str)
{
	int i, j;
	char separator[] = ",;.!?\"(){}\n\t ";

	for (i = 0 ; str[i] ; i++)
	{
		for (j = 0 ; separator[j] ; j++)
		{
			if (str[i] == separator[j] && str[i + 1])
				str[i + 1] = toupper(str[i + 1]);
		}
		if (i == 0)
		{
			str[i] = toupper(str[i]);
		}
	}
	str[i] = '\0';

	return (str);
}
