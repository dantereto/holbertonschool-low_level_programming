#include "holberton.h"
/**
 * puts_half - prints half of a string
 *@str: the string
 *Return: return 0
 */
void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
;
i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
