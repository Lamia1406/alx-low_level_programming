#include "main.h"
/**
 * _strspn - entry point of the program
 * @s: the main string
 * @accept: the string we're going to compare its element with the main
 * Description: this function gets the length of a prefix substring
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

