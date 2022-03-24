#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int str = 0, deslen = 0;
while (dest[str++])
deslen++;

for (str = 0; src[str] && str < n; str++)
dest[deslen++] = src[str];

return (dest);
}
