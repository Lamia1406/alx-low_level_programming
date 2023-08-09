#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file -function that  appends text at the end of a file.
 * @filename : the text file to be modified
 * @text_content : the content to be put in the file
 *
 * Return: int (1 if successful and -1 if any errors)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int new_file;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "a");
	if (fp == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	new_file = fprintf(fp, "%s", text_content);
	if (new_file == -1)
	{
		fclose(fp);
		return (-1);
	}
	fclose(fp);

	return (1);
}
