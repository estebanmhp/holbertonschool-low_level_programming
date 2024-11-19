#include "main.h"

/**
 * find_prime - finds a prime number adding second variables to compare n
 * @div: variable to compare factors of n
 * @n: number to be checked for prime
 * Return: 1 if n is prime, or 0 if not
 */
int find_prime(int div, int n)
{
	if (div == 1)
		return (1);
	else if (n % div == 0)
		return (0);
	else
		return (find_prime(div - 1, n));
}

/**
 * is_prime_number - tests if n is prime through a recursive helper
 * @n: number to be checked for prime
 * Return: 1 if n is prime, or 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (find_prime((n / 2), n));
}
