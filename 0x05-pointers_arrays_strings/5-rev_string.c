#include "holberton.h"
/**
 * rev_string - reverses a string.
 *@s: the string
 *Return: return 0
 */
void rev_string(char *s)
{
int i, copy, new;
char h;
for (i = 0; s[i] != 0; i++)
;
copy = i;
for (i--, new = 0; new < copy / 2; new++, i--)
{
h = s[new];
s[new] = s[i];
s[i] = h;
}
}
