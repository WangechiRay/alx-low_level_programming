#include <stdlib.h>
#include "main.h"

/**
* _strchr- locates a character in a string
*
* @s:first character to be located.
* @c:second character to be located in a string
*
* Return: first occurence of character in @c string
* @s. Return NULL if the character isn't found.
*/

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);

return (NULL);
}
