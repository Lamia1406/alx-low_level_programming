#include "main.h"
#include <ctype.h>
/**
 *_islower - entry point of the progrm
 *@c: the user input letter
 *Description: this program displays if a number is lowercase
 *Return: int (1 or 0)
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
