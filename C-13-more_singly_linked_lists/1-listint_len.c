#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - counts all the elements of a struct list type listint_t
 * @h: the list of type listint_t
 * Return: amount of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		size++;
	}

	return (size);
}
