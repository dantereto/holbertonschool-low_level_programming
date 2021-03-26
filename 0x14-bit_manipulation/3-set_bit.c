#include "holberton.h"
#include <stdlib.h>
/**
 * set_bit - set the bit on 1 to index
 *@n: the number
 *@index: the index
 *Return: reyturn 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
return (-1);
else
{
*n = *n | 1 << index;
return (1);
}
}
