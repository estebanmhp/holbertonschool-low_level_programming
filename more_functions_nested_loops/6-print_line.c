#include "main.h"

/**
 * print_line - function to know which character is a digit
 * @n: parameter to keep the value of the return
 * Return: nothing
 */
void print_line(int n)
{
	int l;

	l = 0;
	while (n > 0)
	{
		_putchar('_');
		l++;
		if (l == n)
			break;
	}
	_putchar('\n');
}
