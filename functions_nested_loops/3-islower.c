#include "main.h"

/**
 * _islower - function to know if it is lowercase or not
 * @c: parameter to keep the value of the return
 * Return: int
 */
int _islower(int c)
{
	int x;

	if (c <= 122 && c >= 97)
	{
		x = 1;
	} else
	{
		x = 0;
	}
	return (x);
}
