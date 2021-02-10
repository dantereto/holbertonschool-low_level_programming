#include "holberton.h"
/**
 *  print_times_table - print times tables
 *@n: the number of the table
 *Return: return 0
 */
void print_times_table(int n)
{
int x;
int y;
int result;
if (n > 15 || n < 0)
return;
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
result = x * y;
if (result > 99)
{
_putchar((result / 100) + '0');
_putchar((result / 10 % 10) + '0');
_putchar((result % 10) + '0');
}
else if (result > 9)
{
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else if (y != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
else
_putchar(result + '0');
if (y != n)
{
_putchar (',');
_putchar (' ');
}
}
_putchar('\n');
}
}
