#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint-frees a dlistint_t list
 * @head:pointer to the head to be freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *last;

	while (head)
	{
		last = head->next;
		free(head);
		head = last;
	}
}
