#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings, but just the first n bytes of s2
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated after the first
 * @n: amount of bytes of the second string to be concatenated
 * Return: the string which contains s1 followed by the first n bytes of s2
 * and null termineted, or NULL if memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int sizet, size1 = 0, size2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	if (n >= size2)
		sizet = size1 + size2;
	else
		sizet = size1 + n;

	ptr = malloc((sizet + 1) * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];
	for (i = size1; i < sizet; i++)
		ptr[i] = s2[i - size1];

	ptr[sizet] = '\0';

	return (ptr);
}
