#include "main.h"
/**
 * _sqrt_recursion- entry point of the program
 * @n: The number for which to calculate the square root.
 * Return: The square root of n if it's a perfect square, -1 otherwise.
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
/**
 * _sqrt - Computes the square root of a number using recursion.
 * @n: The number for which to calculate the square root.
 * @i: The current integer to check as a possible square root.
 * Return: The square root of n if it's a perfect square, -1 otherwise.
 */
int _sqrt(int n, int i)
{
	if (n == 1)
		return (1);
	if (i == n || n < 0)
		return (-1);
	if (i * i < n)
		return (_sqrt(n, i + 1));
	return (i);
}
