#include "main.h"
/**
 *_puts - function that prints a string to std output
 *@str: pointer to a string to print it
 *Return: int - the length of a string
 */
void _puts(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
		_putchar(str[p]);
	_putchar('\n');
}
