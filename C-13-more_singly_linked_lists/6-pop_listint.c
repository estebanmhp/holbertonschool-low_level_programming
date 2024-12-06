#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * pop_listint - deletes the head node of a linked list
 * and returns the delete value
 * @head: double pointer to the first member of a singly linked list
 * Return: int value of node deleted from start of list
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	value = temp->n;
	*head = (*head)->next;
	free(temp);
	return (value);
}
