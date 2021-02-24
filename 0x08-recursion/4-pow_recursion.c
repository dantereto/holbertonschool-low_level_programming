#include "holberton.h"
/**
 * _pow_recursion - make a pow
 *@x: the number
 *@y: the number of times
 *Return: return 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
