#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - Frees a memory
  * @grid: 2d array
  * @height:  height of the grid
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
