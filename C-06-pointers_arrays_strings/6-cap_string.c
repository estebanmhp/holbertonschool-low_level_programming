#include "main.h"

/**
 * cap_string - capitalizes all words in a string.
 * separators include: space, tab, new line, coma, semicolon, dot, exclamation
 * mark, question mark, double quotes, parentheses and curly brackets
 * @s: string to be modified, declarated in the function, not in the header
 * Return: modified string
 */
char *cap_string(char *s)
{
	int i = 1;

	char limit[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;

	while (s[i] != '\0')
	{
		int c = 0;

		while (limit[c] != '\0')
		{
			if (s[i] == limit[c])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
			c++;
		}
		i++;
	}
	return (s);
}
