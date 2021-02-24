#include "holberton.h"
/**
 * _sqrt - search tthe sqrt
 *@num: the number
 *@i: the number to search
 *Return: return 0
 */
int _sqrt(int num, int i)
{
int copy;
copy = i * i;
if (copy == num)
return (i);
else if (num < copy)
return (-1);
return (_sqrt(num, i + 1));

}
/**
 * _sqrt_recursion- make a sqrt
 *@n: the number
 *Return: return 0
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 1));
}
