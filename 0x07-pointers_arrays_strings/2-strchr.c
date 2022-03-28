#include <stdio.h>
#include "main.h"

/**
* _strchr- locates a character in a string
* @s:first character to be located.
* @c:second character to be located in a string
* Return: first occurence of character in @c string
* @s. Return NULL if the character isn't found.
*/

char *_strchr(char *s, char c)
{
char *p = s;
int str = 0;
while (*s != c)
{
s++;
str++;
}
if (*s == c)
{
return (p + str);
}
else
{
return (NULL);
}
}