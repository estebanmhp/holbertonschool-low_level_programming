#include "main.h"

/**
 * string_toupper - function that converts lowercase to uppercase
 * @s: string to be modified, declarated in the function, not in the header
 * Return: modified string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
