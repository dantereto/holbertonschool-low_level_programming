#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@height: the height
 *@width: the width
 *Return: reyturn 0
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
return ('\0');
grid = malloc(sizeof(int) * height);
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
for (j = 0; j < width; j++)
grid[i][j] = '\0';
}
return (grid);
}
