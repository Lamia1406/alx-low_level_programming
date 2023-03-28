#include "main.h"
/**
 * puts2 - entry point of the program
 * @str: the input string
 * Description: this program prints only the elements with odd indexes
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; i < (int) strlen(str) ; i++)
	{
		if (i % 2 == 0)
			printf("%c", str[i]);
	}
	printf("\n");
}

