#include "main.h"

/**
 * puts_half - function that prints just the half of a string
 * @str: pointer to a string to print it
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int h;
	int n;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
	{
		h = i / 2;
		while (str[h] != '\0')
		{
			_putchar(str[h]);
			h++;
		}
	}
	else
	{
		n = (i - 1) / 2;
		h = i - n;
		/**
		 * h = (i + 1) /2;
		 * Another possibility
		 */
		while (str[h] != '\0')
		{
			_putchar(str[h]);
			h++;
		}
	}
	_putchar('\n');
}
