#include "main.h"
/**
 * string_toupper - entry point of the program
 * @str: the input string
 * Description: this program changes all letter of string to uppercase
 * Return: int (1 or 0)
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; i < strlen(str) ; i++)
		str[i] = toupper(str[i]);
	str[i] = '\0';

	return (str);
}

