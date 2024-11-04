#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: pointer to a string to print it
 * Return: Nothing
 */
void puts2(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		if (p % 2 == 0)
			_putchar(str[p]);
	}
	_putchar('\n');
}
