#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars, and initializes
*    it with a specific char.
* @size:size of the bytes
* @c:character to be initialized
*
* Return:NULL if size == 0 otherwise return pointer to the array
*/

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int x;

if (size == 0)
return (NULL);

arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);

for (x = 0; x < size; x++)

arr[x] = c;
return (arr);
}
