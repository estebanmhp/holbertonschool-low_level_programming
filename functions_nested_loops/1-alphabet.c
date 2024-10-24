#include "main.h"

/**
 * print_alphabet - void to print the alphabet
 * putchar - Function to print a char
 * Return: Nothing
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
