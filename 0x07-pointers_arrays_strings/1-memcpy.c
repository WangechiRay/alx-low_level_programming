# include "main.h"

/**
* _memcpy - copies memory area
* @dest:the pointer to be copied to
* @src: the pointer of bytes to be copied from.
* @n:number of bytes from the memory area
* Return: a pointer to the @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
