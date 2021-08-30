#include "search_algos.h"
/**
 *  jump_search - jump_search
 *
 * @array: array
 * @size: size of array
 * @value: the value to search
 * Return: Always 0 (Success)
 */
int jump_search(int *array, size_t size, int value)
{
size_t step = 0, prev = 0;
if (array != NULL)
{
while (array[step] < value)
{
printf("Value checked array[%lu] = [%d]\n", step, array[step]);
prev = step;
step += sqrt(size);
if (step >= size)
break;
}
printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
for (; prev < size && prev <= step; prev++)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);
}
}
return (-1);
}
