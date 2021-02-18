#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 *@s1: the string
 *@s2: the second string
 *Return: return 0
 */
int _strcmp(char *s1, char *s2)
{
int len;
for (len = 0; s1[len] || s2[len]; len++)
{
if (s1[len] < s2[len])
return (s1[len] - s2[len]);
else if (s1[len] > s2[len])
return (s1[len] - s2[len]);
}
return (0);
}
