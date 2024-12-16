#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key in a hash table
 * @ht: table to search
 * @key: key used to find value
 * Return: associated value, or NULL if key is not found or if something fails
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);

		node = ht->array[index];

		if (node == NULL)
			return (NULL);

		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
	}

	return (NULL);
}
