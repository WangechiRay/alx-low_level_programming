#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked- allocates memory using malloc
 * @b:pointer to the allocated memory.
 *
 * Return: a ponter
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}



