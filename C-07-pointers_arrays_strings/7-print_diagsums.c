#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D int array
 * @size: amount of elements in array, including rows and columns
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sumf = 0;
	int sums = 0;

	while (i < size)
	{
		sumf += a[i * size + i];
		sums += a[i * size + (size - i - 1)];
		i++;
	}
	printf("%d, %d\n", sumf, sums);
}
