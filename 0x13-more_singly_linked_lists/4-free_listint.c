#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head:a pointer to the head of the listint_t list to be freed.
 * Description: frees listint_t list.
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
