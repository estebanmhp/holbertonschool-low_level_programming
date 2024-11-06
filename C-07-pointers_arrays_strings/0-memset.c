#include <stdio.h>

/**
 * _memset - fills memory of the string with a constant bytes according to n
 * @s: string pointer to fill
 * @b: constant byte to fill memory addresses
 * @n: amount of bytes to be filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
