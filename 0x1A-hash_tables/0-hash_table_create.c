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
	hash_table_t n;
	int s;

	s = malloc(size 

