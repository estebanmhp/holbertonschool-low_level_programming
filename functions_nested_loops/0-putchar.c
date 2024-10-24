#include "headerhb.h"

/**
 * main - Entry point
 * putchar - User Function to print a string
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char c[] = "_putchar";

	for (n = 0; n <= 8; n++)
	{
		_putchar(c[n]);
	}
	_putchar('\n');

	return (0);
}
