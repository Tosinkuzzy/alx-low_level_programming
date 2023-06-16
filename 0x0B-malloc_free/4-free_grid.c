/*
 * File: 4-free_grid.c
 * Author: Tosinkuzzy
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 *@grid: rows of matrix
 *@height: height of the grid
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
while (height)
free(grid[--height]);
free(grid);
}
