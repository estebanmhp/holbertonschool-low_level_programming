#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int n;
	unsigned long int b, f, result;
	unsigned long int mb, mf, total, totalf;

	b = 0;
	f = 1;
	for (n = 1; n <= 91; n++)
	{
		result = b + f;
		b = f;
		f = result;
		printf("%ld, ", result);
	}
	mb = b % 1000;
	mf = f % 1000;
	b = b / 1000;
	f = f / 1000;
	while (n <= 98)
	{
		total = (mb + mf) / 1000;
		totalf = (mb + mf) - total * 1000;
		result = (b + f) + total;
		mb = mf;
		mf = totalf;
		b = f;
		f = result;
		if (totalf >= 100)
			printf("%ld%ld", result, totalf);
		else
			printf("%ld0%ld", result, totalf);
		if (n != 98)
			printf(", ");
		n++;
	}
	putchar('\n');
	return (0);
}
