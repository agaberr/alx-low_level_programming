#include "main.h"

/**
 * free_grid - returns a pointer to a newly allocated space in memory
 * @grid: str to copy
 * @height: str to copy
 *
 * Return: NULL if str = NULL & pointer to the array, or NULL if it fails
*/

void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
