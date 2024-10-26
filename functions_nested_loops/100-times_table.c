#include "main.h"

/**
 * print_times_table - function to print the 9 times tables
 * @n: parameter to save the integer for running the function
 * Return: nothing
 */
void print_times_table(int n)
{
	int a, b, c, l, m, x;

	if (n > 0 && n < 15)
	{
		for (l = 0; l <= n; l++)
		{
			for (m = 0; m <= n; m++)
			{
				x = l * m;
				a = x % 10;
				b = (x / 10) % 10;
				c = x / 100;
				if (m > 0)
				{
					_putchar(',');
					_putchar(' ');
					if(c == 0)
						_putchar(' ');
					if(b == 0 && c == 0)
						_putchar(' ');
				}
				if (c != 0)
				{
					_putchar('0' + c);
					_putchar('0' + b);
					_putchar('0' + a);
				}
				else if (b != 0)
				{
					_putchar('0' + b);
					_putchar('0' + a);
				}
				else
				{
					_putchar('0' + a);
				}
				if (m == n)
					break;
			}
			_putchar('\n');
		}
	}
}
