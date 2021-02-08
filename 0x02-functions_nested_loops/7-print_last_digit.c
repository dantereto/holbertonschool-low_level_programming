#include "holberton.h"
/**
 *  print_last_digit - checksthe last digit of a number
 *@n: number;
 *Return: return 0
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
_putchar(-n + '0');
return (-n);
}
else
{
_putchar(n + '0');
return (n);
}
}
