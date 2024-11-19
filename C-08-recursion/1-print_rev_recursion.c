#include "main.h"

/**
 * _print_rev_recursion - prints a strings in a back way using recursion
 * @s: pointer to beginning of string s
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar (*s);
}
