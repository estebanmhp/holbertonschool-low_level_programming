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
	int y;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			for (z = 0; z <= 9; z++)
			{
				for (y = z + 1; y <= 9; y++)
				{
					putchar('0' + n);
					putchar('0' + m);
					putchar(' ');
					putchar('0' + z);
					putchar('0' + y);

					if (n == 8 && m == 9 && z == 8 && y == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
