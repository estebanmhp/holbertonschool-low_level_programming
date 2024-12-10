#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: base number for searching the value of a bit
 * @index: position in the binary representation
 * Return: the vaue of the bit or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
