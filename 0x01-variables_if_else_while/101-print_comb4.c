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
	int m;
	int o;

	n = 48;
	m = 49;
	o = 50;
	while (n <= 56)
	{
		while (m <= 57)
		{
			while (o < 58)
			{
				if (n < m && m < o)
				{
					putchar(n);
					putchar(m);
					putchar(o);
				}
				if (n != 55 || m != 56 || o != 57)
				{
					putchar(44);
					putchar(32);
				}
				o++;
			}
			m++;
			o = m + 1;
		}
		n++;
		m = n + 1;
		o = m + 1;
	}
	putchar(10);
	return (0);
}

