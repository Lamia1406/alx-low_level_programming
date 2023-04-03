#include "main.h"
/**
 * _memset - entry point of the program
 * @s: the input string
 * @b: constant byte to fill the desired area with
 * @n: the first bytes to be filled with b
 * Description: this program fills the specific memory
 *		area with a constant byte
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}

