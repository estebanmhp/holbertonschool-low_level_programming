#include "main.h"

/**
 * print_triangle - function to print a triangule according to size
 * @size: parameter to know the dimension of the square
 * Return: nothing
 */
void print_triangle(int size)
{
	int h;
	int b;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (b = 0; b < size; b++)
			{
				if ((h + b) < (size - 1))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
