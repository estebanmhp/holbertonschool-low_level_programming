#include "main.h"

/**
 * _isalpha - function to know if it is an alphabet or not
 * @c: parameter to keep the value of the return
 * Return: int
 */
int _isalpha(int c)
{
	int x;

	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		x = 1;
	} else
	{
		x = 0;
	}
	return (x);
}
