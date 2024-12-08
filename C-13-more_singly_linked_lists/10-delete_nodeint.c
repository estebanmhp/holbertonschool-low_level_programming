#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - deletes a node from a list at a specific position
 * @head: double pointer to the first member of a singly linked list
 * @index: index value of position in list, starting at 0
 * Return: 1 if successful, or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *current;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	while (count < index - 1 && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = current->next->next;
	free(temp);

	return (1);
}
