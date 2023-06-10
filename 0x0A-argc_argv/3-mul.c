#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to the program
 * @argc: number of arguments
 * @argv: array containing command line arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
