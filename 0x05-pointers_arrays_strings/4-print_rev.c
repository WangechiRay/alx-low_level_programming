#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s:string to be printed
 */

void print_rev(char *s)
{
int rev = 0, x;
while (s[x++]);
rev++;
for (x = rev - 1; x >= 0; x--)
_putchar(s[x]);

_putchar('\n');
}
