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
size_t i;
if (array != '\0' && action != '\0')
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
