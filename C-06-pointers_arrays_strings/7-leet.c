#include <stdio.h>

/**
 * leet - encodes a string into leetspeak (1337)
 * @s: string to be modified, declarated in the function, not in the header
 * Return: modified string
 */
char *leet(char *s)
{
	int i = 0;

	char n[] = "4433007711";
	char l[] = "aAeEoOtTlL";


	while (s[i] != '\0')
	{
		int c = 0;

		while (l[c] != '\0')
		{
			if (s[i] == l[c])
				s[i] = n[c];
			c++;
		}
		i++;
	}

	return (s);
}
