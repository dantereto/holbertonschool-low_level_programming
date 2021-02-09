#include "holberton.h"
/**
 * print_alphabet - print alphabet
 *Return: return 0
 */
void print_alphabet(void)
{
char cont = 'a';
while (cont <= 'z')
{
_putchar(cont);
cont++;
}
_putchar('\n');
}
