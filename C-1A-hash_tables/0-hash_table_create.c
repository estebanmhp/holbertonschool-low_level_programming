#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array to be created
 * Return: pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
