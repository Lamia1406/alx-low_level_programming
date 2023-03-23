#include "main.h"
#include <stdio.h>
/**
 *times_table - entry point of the progrm
 *Description: this program prints times table
 *Return: void
 */
void times_table(void)
{
	int a;
	int times;

	for (a = 0 ; a < 10 ; a++)
	{
		for (times = 0 ; times < 10 ; times++)
		{
			printf("%*d", times * a < 0 ? 2  : 3, times * a);
			if (times < 9)
				printf(",");
		}
		times = 0;
		printf("\n");
	}
}
