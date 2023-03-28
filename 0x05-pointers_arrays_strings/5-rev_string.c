#include "main.h"
/**
 * rev_string - entry point of the program
 * @s: the input string
 * Description: this program reverses a string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	char rev[strlen(s)];

	for (i = 0 ; i < (int) strlen(s) ; i++)
	{
		rev[strlen(s) - 1 - i] = s[i];
	}
	for (i = 0 ; i < (int) strlen(s) ; i++)
	{
		s[i] = rev[i];
	}
}

