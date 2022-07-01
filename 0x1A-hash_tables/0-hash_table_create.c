#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_t *hash_table_create- creates a hash table 
 * @unsigned long int size: size of the array
 *
 * Return: NULL if function fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n;
	unsigned long int s;

	n = malloc(sizeof(hash_table_t));

	if (n == NULL)
		return NULL;
	n->size = size;
	n->array = malloc(size * sizeof(hash_node_t *));
	if (n->array == NULL)
	{
		free (n);
		return (NULL);
	}
	for (s = 0; s < size; s++)
		n->array[s] = NULL;
	return (n);
}

