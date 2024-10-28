#include "main.h"

/**
 * more_numbers - Function to print the numbers between 0-14, 10 times
 * putchar - Function to print a char
 * Return: Nothing
 */
void more_numbers(void)
{
	int c;
	int n;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
