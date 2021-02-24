#include "holberton.h"
/**
 * _puts_recursion - puts with recursion
 *@s: the pointer
 *Return: return 0
 */
void _puts_recursion(char *s)
{
if  (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
