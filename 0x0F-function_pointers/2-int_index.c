#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - search a integer
 *@array: the array
 *@size: the size of the array
 *@cmp: the f pointer
 *Return: reyturn 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (array != '\0')
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != '\0')
return (i);
}
}
return (-1);
}
