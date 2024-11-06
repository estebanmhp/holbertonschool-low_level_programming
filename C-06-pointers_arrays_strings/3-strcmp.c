#include "main.h"

/**
 * _strcmp - compares the value of two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: int with the difference between both of string
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 != '\0' && *s2 != '\0')
 	{
		if (*s1 != *s2)
		{
			diff = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}
	if (diff == 0)
		diff = *s1 - *s2;

	return (diff);
}
