#include "main.h"

/**
 * _sqrt_recursion - finds natural square root of n through recursive helper
 * @n: number to be checked
 * Return: natural sqaure root of n, or -1 if doesnt have
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - finds a number that multiplied by itself equal to n
 * @n: base number
 * @i: integer to check the square root
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
