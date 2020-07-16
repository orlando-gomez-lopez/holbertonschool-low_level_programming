#include "holberton.h"
/**
 * free_grid - clean space memory
 * @grid: matrix
 * @height: height
 * Return:  matrix deallocated free of space
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
