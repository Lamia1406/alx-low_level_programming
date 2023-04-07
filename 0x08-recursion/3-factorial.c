#include "main.h"
#include<string.h>
/**
 * factorial- entry point of the program
 * @n: the int input
 * Description: this program returns a factorial of a number
 * Return: int
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n *  factorial(n - 1));
}
