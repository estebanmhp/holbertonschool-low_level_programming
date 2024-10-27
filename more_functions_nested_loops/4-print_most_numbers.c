#include "main.h"

/**
 * print_most_numbers - Function to print the numbers between 0 to 9, not 2 & 4
 * putchar - Function to print a char
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (!(n == 2 || n == 4))
			_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
