#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: array of 8 char strings that formats text into board
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		int n = 0;

		while (n < 8)
		{
			_putchar(a[i][n]);
			if (n == 7)
				_putchar('\n');
			n++;
		}
		i++;
	}
}
