#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len- prints number of elements
 * @h:number of nodes
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		t++;
		h = h->next;
	}
	return (t);
}
