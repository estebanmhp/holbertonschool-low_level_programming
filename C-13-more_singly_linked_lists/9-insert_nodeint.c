#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - inserts a new node(specific position) into a list
 * @head: double pointer to the first member of a singly linked list
 * @idx: index value of position in list, starting at 0
 * @n: int value to be stored in new node at index idx
 * Return: address of new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp;
	listint_t *prev = *head;

	if (*head == NULL)
		return (NULL);

	if (idx == 0)
	{
		temp = malloc(sizeof(listint_t));

		if (temp == NULL)
			return (NULL);

		temp->n = n;
		temp->next = *head;
		*head = temp;

		return (*head);
	}
	while (count < idx - 1 && prev != NULL)
	{
		prev = prev->next;
		count++;
	}
	if (prev == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = prev->next;
	prev->next = temp;

	return (temp);
}
