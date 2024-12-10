#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first value to be compared
 * @m: second value to be compared
 * Return: amount of bits that are different between the given values
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((n & 1) != (m & 1))
			count ++;

		n = n >> 1;
		m = m >> 1;
	}

	return (count);
}
