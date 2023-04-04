#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a grid
 * @grid: the 2D grid to free
 * @height: the height of the grid;
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL)
	{
		while (i < height)
			free(grid[i++]);
		free(grid);
	}
}
