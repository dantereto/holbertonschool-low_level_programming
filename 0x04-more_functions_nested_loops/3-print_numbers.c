#include "holberton.h"
/**
 * print_numbers - print numbers
 *Return: return 0
 */
void print_numbers(void)
{
int a = 0;
while (a <= 9)
{
_putchar(a + '0');
a++;
}
_putchar('\n');
}
