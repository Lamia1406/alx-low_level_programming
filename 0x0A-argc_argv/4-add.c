#include<stdio.h>
#include<stdlib.h>
/**
 * main- entry point of the program
 * @argc: the number of command-line arguments
 * @argv: the array containing command-line arguments
 * Description: this program prints its name, followed by a new line.
 * Return: int
*/
int  main(int argc, char *argv[])
{
	int i, j;
	int s = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] ; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);				}
			}
		s = s + atoi(argv[i]);
		}
	printf("%d\n", s);
	return (0);
}
