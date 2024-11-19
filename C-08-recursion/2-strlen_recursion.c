#include "main.h"

/**
 * _strlen_recursion - finds the lenght of a string using recursion
 * @s: pointer to string to be measured
 * Return: amount of bytes in string s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
