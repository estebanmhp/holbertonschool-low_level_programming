#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * add_node_end - Add a new node at the end of a linked list
 * @head: address of the first node of a linked list
 * @str: address of the string to insert into the new node.
 * Return: Address of the new node.
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *new_node;
	list_t *current;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		return (NULL);
		free(new_node);
	}

	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	return (new_node);
}
