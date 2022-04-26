#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements in a linked list
 * @h:number of elements
 *
 * Return:number of elements in linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while(h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
