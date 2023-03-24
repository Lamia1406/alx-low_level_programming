#include "main.h"
#include <ctype.h>
/**
 * _isdigit - entry point of the program
 * @c: the user input
 * Description: this program returns if an input is a digit or not
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
		return (1);
}
