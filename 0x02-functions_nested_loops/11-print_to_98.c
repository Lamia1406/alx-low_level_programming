#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -  prints all natural numbers from n to 98
 * @n: the number to start from
 *Return: all alphabets
 */
void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		printf("%d, ", i);
		i > 98 ? i-- : i++;
	}
	printf("%d\n", i);
}
