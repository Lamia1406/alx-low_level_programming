#include "main.h"
#include<string.h>
/**
 * _print_rev_recursion- entry point of the program
 * @s: the string input
 * Description: this program prints the reverse of a string
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	int i = strlen(s) - 1;

	printc(s, i);
}
/**
 * printc-prints string chars in reverse
 * @c: string input
 * @i: length of the string
 * Return: void
 */
void printc(char *c, int i)
{
	if (i < 0)
	{
		return;
	}
	else
	{
		printf("%c", c[i]);
		printc(c, --i);
	}
}
