#include "main.h"

/**
 * factorial - finds factorial of int n
 * @n: base number to derive factorial
 * Return: factorial of n, or -1 if n < 0
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0 || n == 1)
			return (1);
		return (n * factorial(n - 1));
	}
	else
		return (-1);
}
