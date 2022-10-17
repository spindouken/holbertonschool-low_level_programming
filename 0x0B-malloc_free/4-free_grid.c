#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid prev created by alloc_grid
 * @grid: address of the two dimensional grid
 * @height: height of the grid
 * Return: nada
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
