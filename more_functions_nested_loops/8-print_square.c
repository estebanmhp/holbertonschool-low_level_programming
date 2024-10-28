#include "main.h"

/**
 * print_square - function to print a square according to size
 * @size: parameter to know the dimension of the square
 * Return: nothing
 */
void print_square(int size)
{
	int h;
	int v;

	if (size > 0)
	{
		for (v = 1; v <= size; v++)
		{
			for (h = 1; h <= size; h++)
			{
				if (h >= 0)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
