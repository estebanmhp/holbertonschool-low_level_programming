#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated after the first
 * if any of the given strings is NULL, treated as empty string
 * Return: the string which contains s1 followed by s2 and null termineted
 * or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int sizet, size1 = 0, size2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	sizet = size1 + size2;
	ptr = (char *) malloc((sizet + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];
	for (i = size1; i < sizet; i++)
		ptr[i] = s2[i - size1];

	ptr[sizet] = '\0';

	return (ptr);
}
