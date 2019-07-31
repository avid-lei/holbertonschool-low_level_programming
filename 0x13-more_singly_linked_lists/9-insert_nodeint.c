#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: listint_t
 * @idx: unsigned int
 * @n: int
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = *head;
	listint_t *temp;
	unsigned int count = 0;
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;

	if ((!(*head) || !(head)) && idx > 0)
		return (NULL);

	while (*head)
	{
		if (count + 1 == idx)
		{
			temp = new->next;
			new->next = node;
			node->next = temp;
			return (node);
		}
		count++;
		new = new->next;
	}
	return (NULL);


}
