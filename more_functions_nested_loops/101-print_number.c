#include "main.h"

/**
 * print_number - function to print an integer
 * @n: parameter to run the function
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int m;
	unsigned int d;

	d = 1;
	m = n;
	if (n < 0)
	{
		n *= -1;
		m = n;
		_putchar('-');
	}
	while (m / d >= 10)
		d *= 10;
	while (d > 0)
	{
		_putchar((m / d) % 10 + '0');
		d /= 10;
	}
}
