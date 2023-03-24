#include <stdio.h>
/**
 * main - entry point of the program
 * Description:	this program prints numbers from 1 to 100 except for:
 *		multiplies of 3 and 5 (prints FizzBuzz)
 *		multiplies of only 3 (prints Fizz)
 *		multiplies of only 5 (prints Buzz)
 *
 * Return: 0 (Successful)
 */
int  main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
