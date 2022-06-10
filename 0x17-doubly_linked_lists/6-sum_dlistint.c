#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint-  returns the sum of all the data of a dlistint_t linked list
 * @head:a pointer to the head of the lists
 *
 * Return: sum of data otherwise 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *last = head;

	while (last)
	{
	sum += last->n;
	last = last->next;
	}

	return (sum);
}
