#include "main.h"

/**
* swap_int -swaps the values of two integers.
* @a:first interger to swap
* @b:second interger to swap
*/

void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}
