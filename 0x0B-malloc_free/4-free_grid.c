#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 *
 * @grid : the pointer of the grid
 *
 * @height : height of the grid
 *
 * Return: void
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
