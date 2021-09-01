#include "search_algos.h"
/**
 *  exponential_search - exponential_search
 *
 * @array: array
 * @size: size of array
 * @value: the value to search
 * Return: Always 0 (Success)
 */
int exponential_search(int *array, size_t size, int value)
{
if (array[0] == value)
return (0);
size_t i = 1, start, point;
while (i < size && array[i] <= value)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
start = i;
i = i * 2;
}
point = (i < size - 1 ? i : size - 1);
printf("Value found between indexes [%lu] and [%lu]\n", start, point);
return (binari_search(array, i / 2, point, value));
}
/**
 *  binari_search - binary_search
 *
 * @array: array
 * @left: left
 * @right: right
 * @value: the value to search
 * Return: Always 0 (Success)
 */
int binari_search(int *array, size_t left, size_t right, int value)
{
size_t i = 0, middle;
if (array != NULL)
{
for (i = 0; left <= right;)
{
printf("Searching in array: ");
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
