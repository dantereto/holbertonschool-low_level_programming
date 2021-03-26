#include "holberton.h"
#include <stdlib.h>
/**
 * clear_bit - set the bit on 0 to index
 *@n: the number
 *@index: the index
 *Return: reyturn 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
return (-1);
else
if (n)
{
*n = *n & ~(1 << index);
}
return (1);
}
