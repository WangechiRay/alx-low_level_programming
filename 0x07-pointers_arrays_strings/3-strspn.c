#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s:number of bytes in the pointer
* @accept:the length of the substring
* Return:the number of bytes in the initial segment of @s.
*/

unsigned int _strspn(char *s, char *accept)
{
int i, n;
int c = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n])
c++;
}
}
else
return (c);
}
return (c);
}
