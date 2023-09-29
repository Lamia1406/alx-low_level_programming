#include "main.h"
#include <stdio.h>
/**
 * main- prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0(success)
 */
int main(void)
{
	int i;
	long long int current = 3, temp, prev = 2;

	printf("1, 2, ");
	for (i = 2; i < 98 ; i++)
	{
		printf("%lld", current);
		if (i < 97)
			printf(", ");
		temp = current;
		current += prev;
		prev = temp;
	}
	printf("\n");
	return (0);
}
