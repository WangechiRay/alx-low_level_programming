#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range- creates an array of intergers.
 * @min:values from min
 * @max: values from max
 *
 * Return:pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *point;
	int array;

	if (min > max)
		return (NULL);

	point = malloc(sizeof(int) * (max - min + 1));
	if (point == NULL)
	{
		return (NULL);
	}
	array = 0;
	while (min <= max)
	{
		point[array] = min;
		min++;
		array++;
	}
	return (point);
}
