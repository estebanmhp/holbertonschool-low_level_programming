#include "main.h"

/**
 * _atoi - convert a number in a string to an integer
 * @s: String to be converted
 * Return: converted integer OR 0 if there are no numbers
 */
int _atoi(char *s)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	while (s[i] == ' ' || s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}
