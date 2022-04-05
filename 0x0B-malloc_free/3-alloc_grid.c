#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - returns a pointer to a 2-dimensional array of intergers
* @width:width of grid
* @height:height of grid
*
* Return: NULL if function fails
*         NULL if height/width is 0 or negative
*/

int **alloc_grid(int width, int height)
{
int **arr;
int h1, w2;

if (width <= 0 || height <= 0)
return (NULL);

arr = malloc(sizeof(int *) * height);

if (arr == NULL)
return (NULL);
for (h1 = 0; h1 < height; h1++)
{
arr[h1] = malloc(sizeof(int) * width);
if (arr[h1] == NULL)
{
for (; h1 >= 0; h1--)
free(arr[h1]);

free(arr);
return (NULL);
}
}
for (h1 = 0; h1 < height; h1++)
{
for (w2 = 0; w2 < width; w2++)
arr[h1][w2] = 0;
}
return (arr);
}
