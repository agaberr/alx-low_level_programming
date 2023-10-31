#include "main.h"

/**
 * free_grid - free memory
 * @grid: grid to free
 * @height: height of grid
 *
 * Return: None
*/

void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
