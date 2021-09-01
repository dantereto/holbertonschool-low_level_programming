#include "search_algos.h"
/**
 * advanced_binary - search for a number in a binary way
 * @array: the input
 * @size: the size of the input
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int advanced_binary(int *array, size_t size, int value)
{
return (binari_search(array, 0, size - 1, value));
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
size_t i, middle;
printf("Searching in array:");
if (array != NULL)
{
for (i = 0; left <= right;)
{
for (i = left; i < right; i++)
{
printf("%i, ", array[i]);
}
printf("%i\n", array[i]);
middle = ((right - left) / 2) + left;
if (array[middle] == value && array[middle - 1] != value)
return (middle);
else if (right == left)
return (-1);
else if (array[middle] >= value)
return (binari_search(array, left, middle, value));
else if (array[middle] < value)
return (binari_search(array, middle + 1, right, value));
}
}
return (-1);
}
