#include "main.h"
/**
 * _strncpy - entry point of the program
 * @dest: the first string
 * @src: the second string
 * @n: the maximum number of char to be copied from src to des
 * Description: this program copies src string into des string
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

