#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 *@grid: rows of matrix
 *@height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
while (height)
free(grid[--height]);
free(grid);
}
