#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range -  creates an array of integers
 *@max: the max val
 *@min: the min val
 *Return: reyturn 0
 */
int *array_range(int min, int max)
{
int *array;
int i, cont = min;
if (min > max)
return ('\0');
cont = max - min + 1;
array = malloc(sizeof(int) * cont);
if (array == '\0')
return ('\0');
for (i = 0; i < cont && min <= max; i++, min++)
array[i] = min;

return (array);
}
