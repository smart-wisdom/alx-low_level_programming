#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: height dimensional grid
 * Description: Memory of grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
