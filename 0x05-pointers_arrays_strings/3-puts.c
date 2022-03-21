#include "main.h"

/**
 * _puts - it prints a string to stdout.
 * @str: the string to be printed
 *
 * Return - Always 0
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
