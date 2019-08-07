#include "lists.h"

/**
 * free_dlistint - free list
 * @head: dlistint_t
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head->next;

	while (temp)
	{
		free(head);
		head = temp;
		temp = temp->next;
	}
	free(head);
}
