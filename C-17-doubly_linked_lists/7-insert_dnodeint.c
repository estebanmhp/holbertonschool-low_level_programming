#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position in a list
 * @h: double pointer to first member of a list
 * @idx: index position in list, starting with 0 at head
 * @n: int value stored in new node
 * Return: address of the new node, or NULL if failed (inlcuding invalid idx)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		if (*h != NULL)
			(*h)->prev = new_node;

		*h = new_node;
	}
	else
	{
		for (count = 0; count < idx - 1 && temp != NULL; count++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);

		new_node->prev = temp;
		new_node->next = temp->next;
		temp->next = new_node;

		if (new_node->next != NULL)
			new_node->next->prev = new_node;
	}

	return (new_node);
}
