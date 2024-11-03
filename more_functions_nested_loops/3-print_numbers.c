#include "main.h"

/**
 * print_numbers - Function to print the numbers between 0 to 9
 * putchar - Function to print a char
 * Return: Nothing
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}