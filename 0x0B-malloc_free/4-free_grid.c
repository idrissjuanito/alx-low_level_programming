#include <stdlib.h>

/**
 * free_grid - free the memory of a 2d array
 *
 * @grid: 2d array to free
 * @height: lenght of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
