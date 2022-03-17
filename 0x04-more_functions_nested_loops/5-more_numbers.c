#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int x, count;
for (count = 0; count <= 9; count++)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
_putchar('\n');
}
}
