#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile -function that reads a text file
 *			and prints it to the POSIX standard output.
 * @filename : the text file to be read
 * @letters : the maximum number of characters to be read and printed
 *
 * Return: ssize_t (the actual number of letters it could read and print)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	int c;
	size_t count = 0;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while ((c = fgetc(fp)) != EOF && count < letters)
	{
		putchar(c);
		count++;
	}
	fclose(fp);
	return (count);
}
