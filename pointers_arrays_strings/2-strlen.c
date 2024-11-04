#include "main.h"

/**
 * _strlen - function that prints the lenght of a string
 * @s: Parameter using as pointer to save the string to run the function
 * Return: Nothing
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
