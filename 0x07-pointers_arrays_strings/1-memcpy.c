#include "main.h"
/**
 * _memcpy - entry point of the program
 * @src: source memory area
 * @dest: destination  memory area
 * @n: the first bytes to be copied
 * Description: this program fills the specific memory
 *		area with a constant byte
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

