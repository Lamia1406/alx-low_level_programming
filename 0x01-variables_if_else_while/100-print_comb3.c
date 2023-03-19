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
	n = 48;
	m=49;
	while (n <= 56)
	{
		while (m <= 57)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
			}
			if (n < 56 || m < 57)
			{
				putchar(44);
				putchar(32);
			}
			m++;
		}
		n++;
		m= n + 1;
	}
	putchar(10);
	return (0);
}

