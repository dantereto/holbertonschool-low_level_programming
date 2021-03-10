#include "function_pointers.h"
/**
 * array_iterator - print a name
 *@array: the array
 *@size: the size of the array
 *@action: the f pointer
 *Return: reyturn 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != '\0')
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}
}
