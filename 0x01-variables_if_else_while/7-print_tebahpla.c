#include <stdio.h>
/**
 *main - entry point of the program
 *Description: this program prints all single digits
 *		from 0 to 10
 *		using putchar
 *Return: 0 successful operation
 */
int main(void)
{
	int n;

	n = 122;
	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar(10);
	return (0);
}

