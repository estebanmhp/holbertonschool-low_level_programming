#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table
 * @key: the key string
 * @size: the size of the array of the hash table
 * Return: index at which the key/value apir should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
