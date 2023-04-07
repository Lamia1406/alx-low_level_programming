#include "main.h"
/**
 * _pow_recursion- entry point of the program
 * @x: the int input
 * @y: the power we're raising x to
 * Description: this returns the value of x raised to the power of y
 * Return: int
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
