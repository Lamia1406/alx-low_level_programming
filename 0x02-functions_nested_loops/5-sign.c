#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 *print_sign  - entry point of the progrm
 *@n: the user input number
 *Description:this program returns if an input is
 *		positive or negative
 *Return: int (1 or 0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return puts("+1");
	}
	else if (n < 0)
	{
		return puts("-1");
	}
	else
	{
		return puts("00");
	}
}
