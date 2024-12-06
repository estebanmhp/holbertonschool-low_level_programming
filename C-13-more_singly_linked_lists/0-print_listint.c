#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a struct list type listint_t
 * @h: the list of type listint_t
 * Return: amount of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		size++;
	}

	return (size);
}
