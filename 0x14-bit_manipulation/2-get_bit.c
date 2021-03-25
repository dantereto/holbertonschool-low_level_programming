#include "holberton.h"
#include <stdlib.h>
/**
 * get_bit - get the bite of the index
 *@n: the number
 *@index: the index
 *Return: reyturn 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;
if (n)
{
for (i = 0; i < index; i++)
n = n >> 1;
if (n & 1)
return (1);
else
return (0);
}
return (-1);
}
