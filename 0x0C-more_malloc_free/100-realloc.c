#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - make a realloc function
 *@old_size: the old size
 *@new_size: the new size
 *@ptr: the pointer
 *Return: reyturn 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *array;
char *ptr2;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != '\0')
{
free(ptr);
return ('\0');
}
if (ptr == NULL)
{
array = malloc(new_size);
if (array == '\0')
return ('\0');
return (array);
}
array = malloc(new_size);
if (array == '\0')
return ('\0');
ptr2 = ptr;
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
array[i] = ptr2[i];
}
for (i = 0; i < old_size && i < new_size; i++)
array[i] = ptr2[i];
free(ptr);
return (array);
}
