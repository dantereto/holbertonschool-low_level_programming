#include "holberton.h"
/**
 * print_alphabet_x10 - printf alphabet ten times
 *Return: return 0
 */
void print_alphabet_x10(void)
{
char alpha;
int cont = 0;
while (cont < 10)
{
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
cont++;
}
}
