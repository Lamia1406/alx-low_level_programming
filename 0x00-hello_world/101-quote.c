#include <unistd.h>
/**
 * main -  the entry point in C
 *
 * Description:the program has  a puts function that writes a line or string
 * Return: 0 that means there are no errors
 */
int main(void)
{
	write(STDERR_FILENO, "\"and that piece of art is useful\"", 33);
	write(STDERR_FILENO, " - Dora Korpar, 2015-10-19\n", 27);
	return (0);
}
