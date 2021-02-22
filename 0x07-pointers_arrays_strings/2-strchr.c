#include "holberton.h"
/**
 * _strchr -  locates a character in a string
 *@s: the pointer
 *@c : the string
 *Return: return 0
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
 else if (*(s + 1) == c)
   return (s + 1);
 s++;
}
return ('\0');
}
