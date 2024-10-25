#include "main.h"

/**
 * times_table - function to print the 9 times tables
 *
 * Return: nothing
 */
void times_table(void)
{
	int n = 0;
	int m;
	int x;

	while (n < 10)
	{
		m = 0;
		while (m < 10)
		{
			x = n * m;
			if (x < 10)
			{
				_putchar(' ');
				_putchar('0' + x);
			}
			else if (x >= 10)
			{
				_putchar('0' + (x / 10));
				_putchar('0' + (x % 10));
			}
			if (m == 9)
				break;
			_putchar(',');
			_putchar(' ');
			m++;
		}
		if (n == 9)
			break;
		_putchar('\n');
		n++;
	}
}
