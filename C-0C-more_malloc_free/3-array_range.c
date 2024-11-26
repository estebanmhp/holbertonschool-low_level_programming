#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers, which contains
 * min and max, plus all the values between them
 * @min: lowest int value in array
 * @max: highest in value in array
 * Return: the created int arra.
 * NULL if min > max, or if malloc fails
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(size * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min += 1;
	}

	return (ptr);
}
