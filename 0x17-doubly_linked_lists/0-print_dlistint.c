#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints size of the elements
 * @h:number of nodes
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (s);
}

