#include <stdio.h>
/**
 *main - entry point of the program
 *Description: this program prints all single digits
 *		from 0 to 10
 *Return: 0 successful operation
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}

