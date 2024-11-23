#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints file name of program
 * @argc: amount of the arguments
 * @argv: array of strings containing the arguments
 * Return: 0 if it is success, or 1 if it is an error
 */
int main(int argc, char *argv[])
{
	int i;
	int x = 1;

	if (argc - 1 >= 2)
	{
		for (i = 1; i < argc; i++)
			x *= atoi(argv[i]);
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
