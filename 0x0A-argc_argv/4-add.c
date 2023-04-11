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
	int i;
	int s = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				s = s + atoi(argv[i]);
			}
		}
		printf("%d\n", s);
		return (0);
	}
}
