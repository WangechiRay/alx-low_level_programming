#include "main.h"

/**
 * _strlen - the function returns the length of a string
 * @s: character of strlen
 *
 * Return: the length of s.
 */

int _strlen(char *s)
{
int length = 0;
while (*s++)
length++;
return (length);
}

