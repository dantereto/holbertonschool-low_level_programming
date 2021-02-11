#include "holberton.h"
/**
 * print_line - print lines
 *@n:the number of lines
 *Return: return 0
 */
void print_line(int n)
{
int line = 0;
while (line < n)
{
_putchar('_');
line++;
}
_putchar('\n');
}
