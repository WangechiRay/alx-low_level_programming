#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index- searches for an interger
 * @array: elements of array
 * @size: size of the number of elemnts in the array
 * @cmp: pointer to the function
 *
 * Return: -1 if no element matches and size is <= 0
 *        :the index of the first element  for which the cmp
 *   function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
