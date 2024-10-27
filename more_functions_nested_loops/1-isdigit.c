#include "main.h"

/**
 * _isdigit - function to know which character is a digit
 * @c: parameter to keep the value of the return
 * Return: int
 */
int _isdigit(int c)
{
	int x;

	if (c <= 57 && c >= 48)
	{
		x = 1;
	} else
	{
		x = 0;
	}
	return (x);
}
