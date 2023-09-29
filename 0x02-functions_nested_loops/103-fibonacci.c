#include "main.h"
#include <stdio.h>
/**
 * main- prints the sum of the even-valued terms,b y considering the terms in
 *			the Fibonacci sequence whose values do not exceed 4,000,000
 * Return: 0(success)
 */
int main(void)
{
	int i;
	long int current = 3, temp, prev = 2;

	printf("1, ");
	while (current < 4000000)
	{
		if (current % 2 != 0)
			printf("%ld", current);
		temp = current;
		current += prev;
		prev = temp;
		if (current % 2 != 0 && current < 4000000)
			printf(", ");
	}
	printf("\n");
	return (0);
}
