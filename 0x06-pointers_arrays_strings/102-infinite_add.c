#include "holberton.h"
#include <stdio.h>
/**
 *  times_table - print the tables to 9
 *Return: return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int i ,j, result;
  for (n1 = 0; n1[i]; i++)
    ;
  for (n2 = 0; n2[j]; j++)
    ;
  result = i + j;
  r[size_r] = result;
  printf("%d\n", r[size_r]);
  return (r);
}
