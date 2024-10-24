#include "main.h"

/**
 * print_alphabet_x10 - void to print the alphabet x 10
 * putchar - Function to print a char
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
