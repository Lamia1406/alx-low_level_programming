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
		putchar('\n');
		letter++;
	}
	return (0);
}

