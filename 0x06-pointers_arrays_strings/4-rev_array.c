#include "main.h"

/**
* reverse_array- reverses the content of an array of integers.
* @a:an array of intergers
* @n:the number of elements of the array
*
* Return : nothing
*/

void reverse_array(int *a, int n)
{
int tmp, index;

for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
