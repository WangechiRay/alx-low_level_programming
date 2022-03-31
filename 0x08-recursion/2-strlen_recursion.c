#include "main.h"

/**
* _strlen_recursion-returns length of a string
* @s:length of the string to be returned
*
* Return: length of string
*/

int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
i++;
i += _strlen_recursion(s + 1);
}
return (i);
}
