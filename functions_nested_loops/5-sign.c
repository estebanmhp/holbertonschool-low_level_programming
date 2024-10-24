#include "main.h"

/**
 * print_sign - function to know if it is an alphabet or not
 * @n: parameter to keep the value of the return
 * Return: int
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		_putchar('+');
		x = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		x = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		x = -1;
	}
	return (x);
}
