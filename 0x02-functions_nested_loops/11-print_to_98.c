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
	if (num < 98)
	{
		for (num ; num <= 98 ; num++)
		{
			printf("%d", num);
			if (num < 98)
			{
				printf(", ");
			}
		}
	}
	else if (num > 98)
	{
		for (num ; num >= 98 ; num--)
		{
			printf("%d", num);
			if (num > 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
