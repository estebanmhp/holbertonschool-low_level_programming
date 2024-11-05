#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to have content added from the second str
 * @src: string to be concatenate
 * Return: pointer to dest with the new value
 */
char *_strcat(char *dest, char *src)
{
	char *append = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (append);
}
