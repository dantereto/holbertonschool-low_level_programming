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
int **alloc;
if (width <= 0 || height <= 0)
return ('\0');
alloc = malloc(sizeof(int) * height);
if (alloc == '\0')
return ('\0');
for (i = 0; i < height; i++)
{
alloc[i] = malloc(sizeof(int) * width);
if (alloc[i] == '\0')
{
while (i >= 0)
{
free(alloc[i]);
}
free(alloc);
return (NULL);
}
for (j = 0; j < width; j++)
alloc[i][j] = '\0';
}
return (alloc);
}
