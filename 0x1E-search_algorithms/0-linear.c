#include "search_algos.h"
/**
 *  linear_search - linear search
 *
 * @array: array
 * @size: size of array
 * @value: the value to search
 * Return: Always 0 (Success)
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
if (array != NULL)
{
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (value == array[i])
return (i);
}
}
return (-1);
}
