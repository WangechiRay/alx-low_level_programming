#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s:string to be printed
 *
 * Return - Always 0
 */

void print_rev(char *s)
{
while (*s)
_putchar(*s--);
_putchar('\n');
}
