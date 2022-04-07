#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc- allocates memory for an array.
 * @nmemb:array to be allocated memory
 * @size: size of the bytes
 *
 * Return:NULL if nmemb or size is 0;
 *  NULL if function fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *arr;
if (nmemb == 0 || size == 0)
	return (NULL);

arr = malloc(nmemb * size);

if (arr == NULL)
	return (NULL);
n = 0;
while (n < nmemb * size)
{
	arr[n] = 0;
	n++;
}
return (arr);
}
