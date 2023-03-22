#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - entry point of the program
 *@num: the user input number
 *Description: this program prints numbers
 *Return: void
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
	for (i = num ; i >= 98 ; i--)
	{
		printf("%d", i);
		if (i > 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
