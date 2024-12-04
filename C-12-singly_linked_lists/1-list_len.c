#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - Calculate the number of elements in a list
 * @h: The list
 * Return: The size of the list(number of nodes)
 **/
size_t list_len(const list_t *h)
{
	unsigned int size = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		size++;
	}
	return (size);
}
