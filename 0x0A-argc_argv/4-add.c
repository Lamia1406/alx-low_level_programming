#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point to the program
 * @argc: number of arguments
 * @argv: array containing command line arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int result, i, j;

	result = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
