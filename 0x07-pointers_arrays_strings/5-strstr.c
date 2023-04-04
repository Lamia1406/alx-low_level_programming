#include "main.h"
/**
 * _strstr - entry point of the program
 * @haystack: the main string
 * @needle: the string we're going to compare its element with the main
 * Description: this function locates a substring
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

