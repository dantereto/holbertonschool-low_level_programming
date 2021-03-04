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
  unsigned int i, copy, cont;
  unsigned int j;
  char *array;
  for (i = 0; s1[i] != '\0'; i++)
    cont++;
  for (j = 0; s2[j] != '\0'; j++)
    cont++;
  if (n >= j)
    j = n;
  array = malloc(sizeof(char) * (i + j + 1));
  if (array == '\0')
    return ('\0');
  for (i = 0; s1[i] != '\0'; i++, copy++)
    array[copy] = s1[i];
  for (j = 0; s2[j] != '\0' && j < n; j++, copy++)
    array[copy] = s2[j];
  array[copy] = '\0';
  return (array);
}
