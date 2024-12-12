#include "lists.h"

/**
 * free_dlistint - frees memory allocated to a list
 * @head: pointer to first member of a list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
