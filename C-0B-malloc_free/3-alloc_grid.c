#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a 2 dimensional array of integers.
 *@width: width oàf array
 *@height: height of array
 *Return: pointer to the array or NULL if is any parameter is 0 or negative
 *or if anything in the process of allocating fails
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
