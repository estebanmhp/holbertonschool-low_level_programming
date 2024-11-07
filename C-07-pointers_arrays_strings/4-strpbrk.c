#include "main.h"

/**
 * _strpbrk - finds the first occurrence in the 1st str of any bytes in 2ndstr
 * @s: string to be searched
 * @accept: string to be matched
 * Return: pointer to first byte in the 1st str that matches with any character
 * in the 2nd str, or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int c = 0;

		while (accept[c] != '\0')
		{
			if (s[i] == accept[c])
				return (&s[i]);
			c++;
		}
		i++;
	}
	return (0);
}
