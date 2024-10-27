#include "main.h"

/**
 * _isupper - function to know which character is uppercase or not
 * @c: parameter to keep the value of the return
 * Return: int
 */
int _isupper(int c)
{
	int x;

	if (c <= 90 && c >= 65)
	{
		x = 1;
	} else
	{
		x = 0;
	}
	return (x);
}
