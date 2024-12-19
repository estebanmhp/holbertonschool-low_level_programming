#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array
 * using a binary search algorithm
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is locate,
 * or -1 if it is not found or if the array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i, mid;
	unsigned int min = 0;
	unsigned int max = size - 1;

	if (array == NULL)
		return (-1);

	while (min <= max)
	{
		mid = min + (max - min) / 2;

		printf("Searching in array: ");

		for (i = min; i <= max; i++)
		{
			if (i == max)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			min = mid + 1;
		else
			max = mid - 1;
	}

	return (-1);
}
