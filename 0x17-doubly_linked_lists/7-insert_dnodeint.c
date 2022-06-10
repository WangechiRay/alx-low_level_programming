#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index-inserts a new node at a given position.
 * @h:double pointer to the head of list
 * @idx:index of the node to be added
 * @n:node to be added
 *
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	unsigned int node;
	dlistint_t *new, *last = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = last;
		*h = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (last == NULL || last->next == NULL)
			return (NULL);
		last = last->next;
	}

	new->next = last->next;
	new->prev = last;
	last->next->prev = new;
	last->next = new;
	return (new);
}
