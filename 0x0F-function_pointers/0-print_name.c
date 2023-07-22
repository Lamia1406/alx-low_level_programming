#include <stdio.h>
#include <stdarg.h>
/**
 * print_name - function that prints numbers followed by a separator.
 * @name: the name to print
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

