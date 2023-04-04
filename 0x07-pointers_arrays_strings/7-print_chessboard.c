#include "main.h"
/**
 * print_chessboard - entry point of the program
 * @a: pointer to the array
 * Description: this function prints a 2D array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0 ; i < sizeof(a) / sizeof(a[0][0]) ; i++)
	{
		for (j = 0; j < 8 ; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}

