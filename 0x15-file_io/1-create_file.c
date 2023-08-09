#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_file -function that creates a file
 * @filename : the text file to be created
 * @text_content : the content to be put in the file
 *
 * Return: int (1 if successful and -1 if any errors)
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int new_file;

	fp = fopen(filename, "w");

	if (filename == NULL)
		return (-1);
	if (fp == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	new_file = fprintf(fp, "%s", text_content);
	if (new_file == -1)
	{
		fclose(fp);
		return (-1);
	}
	fclose(fp);

	return (1);
}
