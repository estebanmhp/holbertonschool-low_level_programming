#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: parameter using as pointer to swap the value
 * @b: parameter using as pointer to swap the value
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;
	*b = s;
}
