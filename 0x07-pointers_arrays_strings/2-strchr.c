#include "main.h"
/**
 * _strchr - entry point of the program
 * @s: the string input
 * @c: the character to search for
 * Description: this program locates a character in a string.
 *		area with a constant byte
 * Return: char
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

