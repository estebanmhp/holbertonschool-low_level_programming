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

	printf("Size of a char: %u byte(s)\n", (unsigned int) sizeof(c));
	printf("Size of a int: %u byte(s)\n", (unsigned int) sizeof(u));
	printf("Size of a long int: %u byte(s)\n", (unsigned int) sizeof(l));
	printf("Size of a long long int: %u byte(s)\n", (unsigned int) sizeof(ll));
	printf("Size of a float: %u byte(s)\n",(unsigned int) sizeof(f));

	return (0);
}
