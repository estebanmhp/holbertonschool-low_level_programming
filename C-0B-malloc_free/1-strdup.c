#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a given string and returns the copy
 * @str: string to be duplicted
 * Return: the duplicated string, or NULL if the str is NULL
 * or if the allocation memory fails
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;

	ptr = (char *) malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		ptr[i] = str[i];
	return (ptr);
}
