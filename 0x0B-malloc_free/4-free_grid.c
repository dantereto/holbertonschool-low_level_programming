#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - free the grid
 *@height: the size
 *@grid: the grid
 *Return: reyturn 0
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
