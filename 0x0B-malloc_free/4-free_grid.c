#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid previously created
*             by your alloc_grid function.
* @grid: address of the two dimensional grid.
* @height: height of the grid
*
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
int h1;

for (h1 = 0; h1 < height; h1++)
free(grid[h1]);

free(grid);
}

