#include "holberton.h"
/**
 * print_most_numbers - print numbers, except 4 and 2
 *Return: return 0
 */
void print_most_numbers(void)
{
int a = 0;
while (a <= 9)
{
if (a != 2 && a != 4)
{
_putchar(a + '0');
}
a++;
}
_putchar('\n');
}
