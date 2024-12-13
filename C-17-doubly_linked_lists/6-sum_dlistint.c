#include "lists.h"

/**
 * sum_dlistint - returns the sum of all ints 'n' of a list
 * @head: pointer to first member of a list
 * Return: sum of all ints 'n', or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	if (head == NULL)
		return (0);

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
