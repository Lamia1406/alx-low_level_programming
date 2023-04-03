#include "main.h"
/**
 * _strpbrk - entry point of the program
 * @s: the main string
 * @accept: the string we're going to compare its element with the main
 * Description: this function searches a string for any of a set of bytes
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

