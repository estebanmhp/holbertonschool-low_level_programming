#include "main.h"
/**
 *print_rev - function that prints a string in a reverse way to std output
 *@s: pointer to a string to print it
 *Return: Nothing
 */
void print_rev(char *s)
{
	int p;

	while (s[p] != '\0')
		p++;
	p -= 1;
	while (p >= 0)
	{
		_putchar(s[p]);
		p--;
	}
	_putchar('\n');
}
