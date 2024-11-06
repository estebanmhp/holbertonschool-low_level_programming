#include "main.h"

/**
 * _strncpy - function that copies n bytes of one string to another one
 * @dest: pointer to have the original string
 * @src: pointer to string to copy
 * @n: amount of bytes to be copied
 * Return: Char copy of the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}

	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
