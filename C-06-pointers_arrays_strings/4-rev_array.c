#include "main.h"

/**
 * reverse_array - function that reverse an array
 * @a: pointer to an array to reverse
 * @n: size of the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int s = n - 1;

	while (i < s)
	{
		int rev = a[i];

		a[i] = a[s];
		a[s] = rev;
		i++;
		s--;
	}
}
