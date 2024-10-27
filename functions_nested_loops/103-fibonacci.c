#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int b;
	unsigned long int f;
	unsigned long int result;
	unsigned long int sum;

	b = 0;
	f = 1;
	result = 0;
	sum = 0;

	while (result < 4000000)
	{
		result = b + f;
		b = f;
		f = result;
		if (result < 4000000 && result %  2 == 0)
			sum += result;
	}
	printf("%ld\n", sum);
	return (0);
}
