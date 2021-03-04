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
  unsigned int j;
  int i;
  char *array;
  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";
  for (i = 0; s1[i] != '\0'; i++)
    array = malloc(sizeof(char) * (i + n + 1));
  if (array == NULL)
    return (NULL);
  for (i = 0; s1[i] != '\0'; i++)
    array[i] = s1[i];
  for (j = 0; j < n && s2[j] != '\0'; j++, i++)
    array[i] = s2[j];
  array[i] = '\0';
  return (array);
}
