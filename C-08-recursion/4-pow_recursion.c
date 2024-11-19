#include "main.h"

/**
 * _pow_recursion - returns value of x to the power of y
 * @x: base
 * @y: exponent
 * Return: int x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, (y - 1)));
	}
	else
		return (-1);
}
