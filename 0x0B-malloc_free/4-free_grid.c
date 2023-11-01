#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that create
 * @grid: the size to choose
 * @height: the other sreing
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
