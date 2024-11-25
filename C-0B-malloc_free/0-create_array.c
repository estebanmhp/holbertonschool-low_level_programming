#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an arrays, and initializes it with a specific char.
 * @size: amount of characters to be held in an array
 * @c: character to be assigned to every address in the array
 * Return: the created array, NULL if size = 0 or if the function fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
