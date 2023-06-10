#include <stdio.h>

/**
 * main - entry point to the program
 * @argc: number of arguments
 * @argv: array containing command line arguments
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
