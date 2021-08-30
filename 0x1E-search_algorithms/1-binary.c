#include "search_algos.h"
/**
 *  binary_search - binary_search
 *
 * @array: array
 * @size: size of array
 * @value: the value to search
 * Return: Always 0 (Success)
 */
int binary_search(int *array, size_t size, int value)
{
size_t i = 0, left, right, middle;
if (array != NULL)
{
for (left = 0, right = size - 1; left <= right;)
{
printf("Searching in array:");
for (i = left; i < right; i++)
{
printf("%i, ", array[i]);
}
printf("%i\n", array[right]);
middle = (left + right) / 2;
if (array[middle] > value)
right = middle - 1;
else if (array[middle] < value)
left = middle + 1;
else
return (middle);
}
}
return (-1);
}
