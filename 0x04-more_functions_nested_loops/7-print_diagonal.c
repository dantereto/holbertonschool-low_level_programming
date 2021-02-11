#include "holberton.h"
/**
 * print_diagonal - print a numer of characters \
 *@n: the number of spacs
 *@n: .
 */
void print_diagonal(int n)
{
int line, space;
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
 if (line < 1)
   _putchar('\n');
}
