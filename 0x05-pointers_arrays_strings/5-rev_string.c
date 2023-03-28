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
	int length =(int) strlen(s);
	char rev[length];

	for (i = 0 ; i < length ; i++)
	{
		rev[length - 1 - i] = s[i];
	}
	for (i = 0 ; i < length ; i++)
	{
		s[i] = rev[i];
	}
}

