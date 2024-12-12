#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: pointer to first member of a list
 * Return: amount of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *curr = h;

	while (curr != NULL)
	{
		curr = curr->next;
		size++;
	}

	return (size);
}
