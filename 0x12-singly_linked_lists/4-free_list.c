#include "lists.h"
/**
  *free_list - free memory
  *@head: list_t
  *Return: always 0
  */

void free_list(list_t *head)
{
	if (!head)
		return;

free_list(head->next);
free(head->str);
free(head);

}
