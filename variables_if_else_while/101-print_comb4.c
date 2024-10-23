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
	int z;

	for (n = 0; n <= 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			for (z = m + 1; z <= 9; z++)
			{
				putchar('0' + n);
				putchar('0' + m);
				putchar('0' + z);

				if (n == 7 && m == 8 && z == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
