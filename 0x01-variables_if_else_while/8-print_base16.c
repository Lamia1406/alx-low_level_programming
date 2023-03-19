#include <stdio.h>
/**
 *main - entry point of the program
 *Description: this program prints all single digits
 *		from 0 to 10 in haxadecimal
 *		using putchar
 *Return: 0 successful operation
 */
int main(void)
{
	int n;

	n = 0x30;
	while (n <= 0x39)
	{
		putchar(n);
		n++;
	}
	n = 0x61;
	while (n <= 0x66)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}

