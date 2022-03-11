#include <stdio.h>

/**
*main-program that prints all possible combinations of single-numbers
*
*Return: Always 0 (Success)
*/
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}
