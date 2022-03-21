#include "main.h"

/**
 * reset_to_98 -  takes a pointer to an int as parameter and updates the value it points to to 98.
 * @n:the number to be stored to the pointer
 *
 */                 
      
void reset_to_98(int *n)
{
int n;
n = 402;
_putchar("n=%d\n", n);
reset_to_98(&n);
_putchar("n=%d\n", n);

