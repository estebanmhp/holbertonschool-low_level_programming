#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to be searched
 * @accept: filter list of characters
 * Return: numbers of bytes in the 1st str matching characters in the 2nd str
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int rn = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		int c = 0;
		int match = 0;

		while (accept[c] != '\0')
		{
			if (s[i] == accept[c])
			{
				rn += 1;
				match = 1;
				break;
			}
			c++;
		}
		if (match == 0)
			break;
		i++;
	}

	return (rn);
}
