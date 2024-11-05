#include "main.h"

/**
 * print_array - function that prints elements of an array of integers
 * @a: pointer to array to print
 * @n: number of elements to print
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		if (l + 1 != n)
			printf("%d, ", a[l]);
		else
			printf("%d\n", a[l]);
	}
}
