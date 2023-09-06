#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid, one created with alloc_grid
 * @grid: the 2D grid
 * @height: height of grid
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
