#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints elements of an array of integers
 * @a: characters to be printed
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
int arr;
for (arr = 0; arr < n; arr++)
{
printf("%d", a[arr]);

if (arr == n - 1)
continue;
printf(", ");
}

printf("\n");
}
