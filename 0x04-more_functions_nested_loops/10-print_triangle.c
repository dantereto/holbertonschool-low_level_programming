#include "holberton.h"
/**
 * print_triangle - print a triangle
 *@size: the numbers of spaces an squares
 */
void print_triangle(int size)
{
int line, space, cont = 1;
if (size <= 0)
_putchar('\n');
while (size > 0)
{
space = size - 1;
while (space > 0)
{
_putchar(' ');
space--;
}
line = 0;
while (line != cont)
{
_putchar('#');
line++;
}
_putchar('\n');
size--;
cont++;
}
}
