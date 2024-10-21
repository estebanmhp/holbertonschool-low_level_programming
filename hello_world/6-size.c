#include <stdio.h>

/**
 * main - Entry point
 * sizeof - Function to know the size in bytes
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int u;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of a int: %zu byte(s)\n", sizeof(u));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(ll));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));

	return (0);
}
