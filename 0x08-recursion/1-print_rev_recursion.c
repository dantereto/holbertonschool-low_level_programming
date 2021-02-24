#include "holberton.h"
/**
 * _print_rev_recursion - print a recursion in reverse
 *@s: the pointer
 *Return: return 0
 */
void _print_rev_recursion(char *s)
{
if  (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
