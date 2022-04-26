#include "lists.h"
#include <stdio.h>

/*
 * free_listint-frees a listint_t list
 * @head:a pointer to the head to be deleted
 *
 */

void free_listint(listint_t *head)
{
	listint_t *last;

	while (head)
	{
		last = head->next;
		free(head);
		head = last;
	}
}
