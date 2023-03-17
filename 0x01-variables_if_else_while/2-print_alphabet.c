#include <stdio.h>
/**
 *main - entry point of the program
 *Description: this program prints alphabet letter by letter
 *Return: 0 successful operation
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

