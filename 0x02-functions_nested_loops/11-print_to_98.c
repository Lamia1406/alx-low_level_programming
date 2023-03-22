#include "main.h"
#include <stdio.h>
/**
 *void print_to_98 - entry point of the program
 *Description: this program prints numbers
 *Return: 0
 */
void print_to_98(int num)
{
	int i;

	for (i = num ; i <= 98 ; i++)
	{ 
		printf("%d", i);
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
