#include <stdio.h>

/**
 * main - entry point, prints file name of program
 * @argc: amount of the arguments
 * @argv: array of strings containing the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
