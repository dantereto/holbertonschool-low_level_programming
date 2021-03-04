#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatet two strings
 *@s1: the string
 *@s2: second sring
 *@n: the len of the s2
 *Return: reyturn 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  unsigned int i = 0, copy = 0, cont = 0;
  unsigned int j;
  char *array;
  if (s1 == '\0')
    s1 = ("");
  if (s2 == '\0')
    s2 = ("");
  for (i = 0; s1[i] != '\0'; i++)
    cont++;
  for (j = 0; s2[j] != '\0'; j++)
    cont++;
  if (n < cont)
    j = n;
  copy += i + j;
  array = malloc(sizeof(char) * copy + 1);
  if (array == '\0')
    return ('\0');
  for (i = 0; s1[i] != '\0'; i++)
    array[i] = s1[i];
for (j = 0; s2[j] != '\0' && i < (copy + 1); j++, i++)
    array[i] = s2[j];
array[i] = '\0';
  return (array);
}
