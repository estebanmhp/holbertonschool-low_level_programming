#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: char to be found
 * Return: pointer to first occurance of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (0);
}
