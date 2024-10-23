#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 99; n++)
	{
		for (m = 0; m <= 99; m++)
		{
			if (n < m)
			{
				putchar('0' + (n / 10));
				putchar('0' + (n % 10));
				putchar(' ');
				putchar('0' + (m / 10));
				putchar('0' + (m % 10));

				if (n == 98 && m == 99)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
