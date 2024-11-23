#include <stdio.h>

/**
 * main - entry point, prints file name of program
 * @argc: amount of the arguments
 * @argv: array of strings containing the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
