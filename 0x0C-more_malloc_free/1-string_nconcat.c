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
  unsigned int i, j, cont;
  char *array;
  for (i = 0; s1[i] != '\0'; i++)
    cont++;
    array = malloc(sizeof(char) *cont + i + 1);
  if (array == '\0')
    return ('\0');
  for (i = 0; s1[i] != '\0'; i++)
    array[i] = s1[i];
  for (j = 0; s2[j] != '\0' && j < n; j++, i++)
    array[i] = s2[j];
  array[i] = '\0';
  return (array);
}
