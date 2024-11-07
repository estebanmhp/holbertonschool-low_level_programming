#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring (2nd string)
 * in the 1st string.Just printable characters, not the null terminator
 * @haystack: string to be searched
 * @needle: substring to find in 1st string
 * Return: pointer to return the substring matched, or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		int c = 0;

		while (needle[c] != '\0' && haystack[i + c] == needle[c])
			c++;
		if (needle[c] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (0);
}
