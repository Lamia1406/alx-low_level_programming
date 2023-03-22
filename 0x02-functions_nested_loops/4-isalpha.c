#include "main.h"
#include <ctype.h>
/**
 *_isalpha - entry point of the progrm
 *@c: the user input letter
 *Description: this program returns if an input is a letter
 *Return: int (1 or 0)
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
