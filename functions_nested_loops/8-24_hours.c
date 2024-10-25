#include "main.h"

/**
 * jack_bauer - function to print every minute of the day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int n;
	int m;

	for (n = 0; n <= 23; n++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');

		}
	}
}
