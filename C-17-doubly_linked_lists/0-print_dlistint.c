#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to first member of a list
 * Return: amount of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *curr = h;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		size++;
	}

	return (size);
}
