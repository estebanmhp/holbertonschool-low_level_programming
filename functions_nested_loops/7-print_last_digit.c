#include "main.h"

/**
 * print_last_digit - function to know the last digit of a number
 * @n: parameter to keep the value of the return
 * Return: int
 */
int print_last_digit(int n)
{
	int m;

	n = n % 10;
	if (n >= 0)
	{
		m = n;
		_putchar(m + '0');
	}
	else
	{
		m = -n;
		_putchar(m + '0');
	}
	return (m);
}
