#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function declartion
 * @grid: 2 dimensional array
 * @height: the height
 * Return: void
 */

void free_grid(int **grid, int height);

/**
 * free_grid - function definition
 * @grid: a 2D array
 * @height: the height of th array
 * Description: free up memory occupied by a 2D array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
