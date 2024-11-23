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
	int sum = 0;
	int i;
	int j;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}
	if (sum > 0)
		printf("%d\n", sum);
	return (0);
}
