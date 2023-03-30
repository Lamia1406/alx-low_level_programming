#include "main.h"
/**
 * leet - entry point of the program
 * @str: the input string
 * Description: this program changes 'aeotl' letters to  '43071' in string
 * Return: char
 */
char *leet(char *str)
{
	int i, j;

	char numbers[6] = "43071";
	char letters[6] = "aeotl";

	for (i = 0 ; letters[i] ; i++)
	{
		for (j = 0 ; str[j] ; j++)
		{
			if (str[j] == letters[i] || str[j] == toupper(letters[i]))
				str[j] = numbers[i];
		}
	}
	return (str);
}

