#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point of the program
 *Description: this program tells use if a value is :
 *	positive,zero or negative
 *Return: 0 successful operation
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");
	return (0);
}

