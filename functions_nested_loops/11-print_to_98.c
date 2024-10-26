#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function print to 98, printing all the numbers from n to 98
 * @n: Variable to save the integer for running the function
 * Return: Nothing
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	if (n == 98)
	{	printf("%d", n);
		putchar ('\n');
	}
}
