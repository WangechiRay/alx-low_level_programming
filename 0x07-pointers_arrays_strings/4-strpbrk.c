#include "main.h"
#include <stdio.h>
/**
* _strpbrk- searches a string for any of a set of bytes
* @s:pointer that checks
* @accept:the character to be checked
* Return: a pointer to the byte in @s that matches one of the
*         bytes in @accept else return NULL if not found.
*/

char *_strpbrk(char *s, char *accept)
{
int n;
while (*s)
{
for (n = 0; accept[n]; n++)
{
if (*s == accept[n])
return (s);
}
s++;
}
return (NULL);
}
