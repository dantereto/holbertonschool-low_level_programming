#include "holberton.h"
/**
 * more_numbers - print a list of numbers
 *Return: return 0
 */
void more_numbers(void)
{
int a = 0;
int b;
while (a < 10)
{
b = 0;
while (b <= 14)
{
if (b > 9)
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
b++;
}
a++;
_putchar('\n');
}
}
