#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2d grid
 * @grid: grid to free
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
		return;
	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
