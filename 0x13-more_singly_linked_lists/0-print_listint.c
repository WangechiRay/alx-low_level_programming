#include "lists.h"
#include <stdio.h>

/**
 * print_list- prints all the elements of a list_t list
 * @h:number of nodes
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->n)
			printf("%d\n", h->n);
		h = h->next;
		s++;
	}

	return (s);
}
