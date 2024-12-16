#include "hash_tables.h"

/**
 * create_new_node - create a new node
 * @key: key
 * @value: value associated with the key
 * Return: the new node
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key. key can not be an empty string
 * @value: value associated with the key
 * Return: 1 on success, 0 on failurre
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new_node;
	hash_node_t *current;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	if (current == NULL)
	{
		new_node = create_new_node(key, value);

		if (new_node == NULL)
			return (0);

		ht->array[index] = new_node;
		return (1);
	}
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	new_node = create_new_node(key, value);

	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
