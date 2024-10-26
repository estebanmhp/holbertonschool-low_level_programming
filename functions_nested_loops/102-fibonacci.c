#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n;
	unsigned long int b;
	unsigned long int f;
	unsigned long int result;

	b = 0;
	f = 1;

	for (n = 0; n < 49; n++)
	{
		result = b + f;
		b = f;
		f = result;
		printf("%ld", result);
		if (n == 48)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
