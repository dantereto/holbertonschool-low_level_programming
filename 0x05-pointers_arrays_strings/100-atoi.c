#include "holberton.h"
/**
 * puts2 - print a string of numbers
 *@str: the string
 *Return: return 0
 */
int _atoi(char *s)
{
  int res = 0;
  int sign = 1;
  int i = 0;
  if (s[0] == '-') 
{
    sign = -1;
    i++;
}
  for (; s[i] != '\0'; ++i)
    res = res * 10 + s[i] - '0';
  return (sign * res);
}
