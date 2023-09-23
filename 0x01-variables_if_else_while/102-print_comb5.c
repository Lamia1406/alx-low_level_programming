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
	char  a, b, c, d;

	void print_num(char a, char b, char c, char d);
	for (a = '0'; a <= '9' ; a++)
	{
		for (b = '0' ; b <= '9' ; b++)
		{
			for (c = '0' ; c <= '9' ; c++)
			{
				for (d = '1' ; d <= '9' ; d++)
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
	putchar(10);
	return (0);
}
/**
 * print_num - function that prints a 4 digit num.
 * @a: first digit
 * @b: second digit
 * @c: third digit
 * @d: fourth digit
 */
void print_num(char a, char b, char c, char d)
{
	if ((a - c) * 10 != d - b && c * 10 + d - (a * 10 + b) > 0)
	{
		putchar(a);
		putchar(b);
		putchar(32);
		putchar(c);
		putchar(d);
		if ((a - 57) * 100 + (b - 56) * 10 + c - 57 < (-d + 57) / 10)
		{
			putchar(44);
			putchar(32);
		}
	}
}
