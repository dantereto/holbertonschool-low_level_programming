#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatet two strings
 *@s1: the string
 *@s2: second sring
 *Return: reyturn 0
 */
char *str_concat(char *s1, char *s2)
{
int cont = 0, i, copy, j;
char *p;
if (s1 == '\0')
s1 = ("");
if (s2 == '\0')
s2 = ("");
for (i = 0; s1[i] != '\0'; i++)
cont++;
for (j = 0; s2[j] != '\0'; j++)
cont++;
p = malloc(sizeof(char) * cont);
if (p == NULL)
return ('\0');
for (i = 0; s1[i] != '\0'; i++, copy++)
p[copy] = s1[i];
for (j = 0; s2[j] != '\0'; j++, copy++)
p[copy] = s2[j];
return (p);
}
