#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Prints all the elements of a list_t
 * @h: The list_t
 * Return: The number of nodes in h
 */
size_t print_list(const list_t *h)
{
	unsigned int size = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		size++;
	}
	return (size);
}
