#include "holberton.h"
/**
 * print_square - print a number of squares
 *@size:the number of squares
 *Return: return 0
 */
void print_square(int size)
{
int x = 0;
int y;
if (size <= 0)
_putchar('\n');
while (x < size)
{
y = 0;
while (y < size)
{
_putchar('#');
y++;
}
x++;
_putchar('\n');
}
}
