#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: pointer to a string to print it
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int c = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (c < i)
	{
		char rs = s[c];

		s[c] = s[i];
		s[i] = rs;
		c++;
		i--;
	}
}
