#include "main.h"
#include <stdio.h>
/**
 *jack_bauer - entry point of the progrm
 *Description: this program 24h second by minute
 *Return: void
 */
void jack_bauer(void)
{
	int min;
	int hour;

	for (hour = 0 ; hour < 24 ; hour++)
	{
		for (min = 0 ; min < 60 ; min++)
		{
			if (min < 10 && hour < 10)
				printf("0%d:0%d", hour, min);
			else if (min < 10 && hour >= 10)
				printf("%d:0%d", hour, min);
			else if (min >= 10 && hour < 10)
				printf("0%d:%d", hour, min);
			else
				printf("%d:%d", hour, min);
			printf("\n");
		}
		min = 0;
	}
}
