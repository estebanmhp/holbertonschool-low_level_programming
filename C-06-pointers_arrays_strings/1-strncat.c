#include "main.h"

/**
 * _strncat - concatenates two strings according to n bytes
 * @dest: string to have content added from the second str
 * @src: string to be concatenate
 * @n: amount of bytes to be copied
 * Return: pointer to dest with the new value
 */
char *_strncat(char *dest, char *src, int n)
{
	char *append = dest;
	int ls = 0;
	int ld = 0;

	while (dest[ld] != '\0')
		ld++;

	while (ls <= (n - 1) && src[ls] != '\0')
	{
		dest[ld++] = src[ls];
		ls++;
	}

	dest[ld] = '\0';

	return (append);
}
