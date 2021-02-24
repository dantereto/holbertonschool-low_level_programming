#include "holberton.h"
/**
 * operation -  search primer numbers
 *@n: the number
 *@d: the operator
 *Return: return 0
 */
int operation(int n, int d)
{
if (n % d == 0)
return (0);
if (d == n / 2)
return (1);
return (operation(n, d + 1));
}
/**
 * is_prime_number - search prime numbers
 *@n: the number
 *Return: return 0
 */
int is_prime_number(int n)
{
int d = 2;
if (n  <= 1)
return (0);
return (operation(n, d));
}
