#include<stdio.h>
/**
 * main- entry point of the program
 * @argc: the number of command-line arguments
 * @argv: the array containing command-line arguments
 * Description: this program prints its name, followed by a new line.
 * Return: int
*/
int  main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
