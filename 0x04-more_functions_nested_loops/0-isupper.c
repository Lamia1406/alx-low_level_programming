#include "main.h"
#include <ctype.h>
/**
 * _isupper - entry point of the program
 * @c: the input character
 * Description: this program returns if a letter is uppercase or not
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else
		return (1);
}
