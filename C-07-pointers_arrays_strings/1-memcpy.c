#include "main.h"

/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 * @dest: destination memory addresses
 * @src: source memory addresses
 * @n: amount of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
