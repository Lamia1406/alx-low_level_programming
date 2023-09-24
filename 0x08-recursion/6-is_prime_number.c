#include "main.h"
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (prime(n, n, 0) == 2)
		return (1);
	return (0);
}
/**
 * prime - Helper function to check for prime number.
 * @main_num: The original number to check for primality.
 * @n: The current number being checked for divisibility.
 * @i: The count of divisors found.
 *
 * Return: 2 if the number is prime, 0 otherwise.
 */
int prime(int main_num, int n, int i)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (i);
	if (main_num % n == 0)
		i++;
	prime(main_num, n - 1, i);
	return (0);
}
