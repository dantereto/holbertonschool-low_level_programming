#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - make a calloc function
 *@size: the size
 *@nmemb: the number of sizes
 *Return: reyturn 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *array;
unsigned int i;
if (nmemb == 0 || size == 0)
return ('\0');
array = malloc(nmemb * size);
if (array == '\0')
return ('\0');
for (i = 0; i < nmemb * size; i++)
array[i] = '\0';
return (array);
}
