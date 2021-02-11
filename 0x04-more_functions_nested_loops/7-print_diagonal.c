#include "holberton.h"
/**
 * print_diagonal - print a numer of characters \
 *@n: the number of spacs
 *@n: .
 */
void print_diagonal(int n)
{
int line, space;
if (n < 0)
_putchar('\n');
line = 0;
for (; n > 0; n--)
{
for (space = line; space > 0; space--)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
line++;
}
}
