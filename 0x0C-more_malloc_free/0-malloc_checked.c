#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - check if the malloc fails
 *@b: the memory space
 *Return: return 0
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == '\0')
exit(98);
return (ptr);
}
