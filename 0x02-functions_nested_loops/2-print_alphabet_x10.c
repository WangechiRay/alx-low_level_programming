#include "main.h"

/**
* print_alphabet_x10 -prints lowercase 10times
*
* Return:Always 0
*/
void print_alphabet_x10(void)
{
int r = 0;
char low;
while (r++ <= 9)
{
for (low = 'a'; low <= 'z'; low++)
_putchar(low);
_putchar('\n');
}
}
