#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * sum_listint - returns the sum of all elements (int n) of the list
 * @head: pointer to the first member of the list
 * Return: sum of all the 'int n' elements in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (head == NULL)
		return (sum);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
