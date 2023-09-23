#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int change;
	int result = 0, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; coins[i]; i++)
	{
		result += change / coins[i];
		if (change % coins[i] != 0)
			change %= coins[i];
		else
			break;
	}
	printf("%d\n", result);
	return (0);
}
