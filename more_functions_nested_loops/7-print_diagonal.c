#include "main.h"

/**
 * print_diagonal - function to print a diagonal according to n
 * @n: parameter to keep the value of the return
 * Return: nothing
 */
void print_diagonal(int n)
{
	int s;
	int d;

	if (n > 0)
	{
		for (d = 1; d <= n; d++)
		{
			for (s = 1; s <= d; s++)
			{
				if (s != 1)
					_putchar(' ');
				if (s == d)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
