#include "search_algos.h"
/**
 *  interpolation_search - interpolation_search
 *
 * @array: array
 * @size: size of array
 * @value: the value to search
 * Return: Always 0 (Success)
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t low = 0, high = size - 1;
if (array == NULL && size == 0)
return (-1);
while (low < high)
{
size_t pos = low + (((double)(high - low) / (
			     array[high] - array[low])) * (
				     value - array[low]));
if (pos > (size - 1))
{
printf("Value checked array[%lu] is out of range\n", pos);
break;
}
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
if (array[pos] == value)
return (pos);
else if (array[pos] < value)
high = pos - 1;
else if (array[pos] > value)
low = pos + 1;
}
return (-1);
}
