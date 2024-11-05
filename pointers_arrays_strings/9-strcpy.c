#include "main.h"

/**
 * _strcpy - function that copies an array to another one
 * @dest: pointer to have the original string
 * @src: pointer to string to copy
 * Return: Char copy of the string
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';

	return (dest);
}
