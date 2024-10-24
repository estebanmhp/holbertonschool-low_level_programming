#include "main.h"

/**
 * _abs - function to know the absolute value of an integer
 *
 * Return: int
 */
int _abs(int n)
{
	int m;

	if (n > 0)
	{
		m = n;
	}
	else if (n < 0 )
	{
		m = -n;
	}
	else
	{
		m = 0;
	}
	return (m);
}
