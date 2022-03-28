#include "main.h"

/**
* _memset - fills memory with a constant byte.
* @s:pointer of the memory location where memory will be set
* @b:value that is to be copied to the memory block
* @n:number of the bytes to be filled.
* Return: a pointer to the memory @s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
