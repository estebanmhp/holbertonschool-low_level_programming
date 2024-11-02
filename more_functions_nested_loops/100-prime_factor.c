#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Nothing
 */
int main(void)
{
	long int n = 612852475143;
	long int fp;

	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
