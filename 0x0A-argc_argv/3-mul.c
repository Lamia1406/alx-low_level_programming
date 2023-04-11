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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i =  atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
}
