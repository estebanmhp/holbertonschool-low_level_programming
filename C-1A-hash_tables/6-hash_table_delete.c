#include "hash_tables.h"

/**
 * hash_node_delete - frees a hash_node_t list
 * @head: head of linked list
 * Return: nothing
 */
void hash_node_delete(hash_node_t *head)
{
	hash_node_t *current;
	hash_node_t *temp;

	current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = temp;
	}
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node == NULL)
			hash_node_delete(node);
	}

	free(ht->array);
	free(ht);
}
