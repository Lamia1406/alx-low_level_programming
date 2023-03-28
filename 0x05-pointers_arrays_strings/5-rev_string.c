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
	int temp = 0;

	for (i = 0 ; i < (int) strlen(s) / 2 + 1 ; i++)
	{
		temp = s[i];
		s[i] = s[strlen(s) - 1 - i];
		s[strlen(s) - 1 - i] = temp;
	}
}

