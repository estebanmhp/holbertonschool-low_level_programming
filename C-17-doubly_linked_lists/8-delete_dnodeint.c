#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at position 'index' of a list
 * @head: double pointer to first member of a list
 * @index: index position in list, starting with 0 at head
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);

	temp = *head;

	for (count = 0; temp != NULL && count < index; count++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (*head == temp)
		*head = temp->next;

	free(temp);
	return (1);
}
