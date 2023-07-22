#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints numbers followed by a separator.
 * @separator: the string separator to be printed between numbers.
 * @n: the number of parameters to print.
 *
 * Return: void
 */
void print_all(const char * const format, ...);
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str != NULL)
		{
			printf("%s", str);

			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		else
		{
			printf("nil");

			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

