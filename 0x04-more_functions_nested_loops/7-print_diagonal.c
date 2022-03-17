#include "main.h"

/**
* desc: print_diagonal- draws a diagonal using \ character
* @n: number of times \ character to be printed
*
* Return: Always 0.
*/
void print_diagonal(int n)
{
int line, s;
if (n > 0)
{
for (line = 0; line < 0; line++)
{
for (s = 0; s < line; s++)
_putchar(' ');
_putchar('\\');

if (line == n - 1)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
