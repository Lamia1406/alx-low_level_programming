#include <stdio.h>
/**
 *main - entry point of the program
 *Description: this program prints combination of single digits
 *		from 0 to 10
 *		using putchar
 *Return: 0 successful operation
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		putchar(44);
		putchar(32);
		n++;
	}
	putchar(10);
	return (0);
}

