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
	int  a, b, c, d;

	void print_num(int a, int b, int c, int d);
	for (a = 48; a <= 57 ; a++)
	{
		for (b = 48 ; b <= 57 ; b++)
		{
			for (c = 48 ; c <= 57 ; c++)
			{
				for (d = 49 ; d <= 57 ; d++)
				{
					print_num(a, b, c, d);
				}
				d = 48;
			}
			d = 48;
			c = 48;
		}
		b = 48;
		c = 48;
		d = 48;
	}
	return (0);
}
/**
 * print_num - function that prints a 4 digit num.
 * @a: first digit
 * @b: second digit
 * @c: third digit
 * @d: fourth digit
 */
void print_num(int a, int b, int c, int d)
{
	if ((a - c) * 10 != d - b && c * 10 + d - (a * 10 + b) > 0)
	{
		putchar(a);
		putchar(b);
		putchar(32);
		putchar(c);
		putchar(d);
		if (((a - 48) * 1000 + (b - 48) * 100 + (c - 48) * 10 + d - 48) != 9899)
		{
			putchar(44);
			putchar(32);
		}
		else
			putchar(10);
	}
}
