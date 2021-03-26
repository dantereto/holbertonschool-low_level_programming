#include "holberton.h"
#include <stdlib.h>
/**
 * countBits - count the diference of bits
 *@n: the number
 *Return: reyturn 0
 */
int countBits(int n)
{
unsigned long int cont = 0;
while (n > 0)
{
cont++;
n &= (n - 1);
}
return (cont);
}
/**
 * flip_bits - return the difference
 *@m: the number
 *@n: the number
 *Return: reyturn 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
return (countBits(n ^ m));
}
