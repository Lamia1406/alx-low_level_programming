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
	int a;
	int b;
	int c;
	int d;

	for (a = 48 ; a <= 57 ; a++)
	{
		for (b = 48 ; b <= 57 ; b++)
		{
			for (c = 48 ; c <= 57 ; c++)
			{
				for (d = 49 ; d <= 57 ; d++)
				{
					if ((a - c) * 10 != d - b && c * 10 + d - (a * 10 + b) > 0)
					{
						putchar(32);
						putchar(a);
						putchar(b);
						putchar(32);
						putchar(c);
						putchar(d);
						if ((a - 57) * 100 + (b - 56) * 10 + c - 57 < (-d + 57) / 10)
							putchar(44);
					}
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
