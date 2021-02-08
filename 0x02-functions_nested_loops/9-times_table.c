#include "holberton.h"
/**
 *  times_table - print the tables to 9
 *Return: return 0
 */
void times_table(void)
{
int a;
int b;
int result;
a = 0;
while (a < 10)
{
_putchar('0');
b = 1;
while (b < 10)
{
result = a *b;
if (result < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
b++;
}
_putchar('\n');
a++;
}
}
