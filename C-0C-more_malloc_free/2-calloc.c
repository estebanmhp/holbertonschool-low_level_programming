#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * initializes all bytes to 0.
 * @nmemb: amount of members in the array
 * @size: amount of bytes occupied by each member
 * Return: NULL if nmemb or size is 0, or if malloc fails.
 * If everything is correct and success return a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	c = ptr;

	for (i = 0; i < (nmemb * size); i++)
		c[i] = '\0';

	return (ptr);
}
