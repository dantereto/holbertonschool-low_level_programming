#include "holberton.h"
/**
 * wildcmp - search if s1 and s1 are similars
 *@s1: the pointer
 *@s2:the second pointer
 *Return: return 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
{
if (*(s2 + 1) != '\0' && *s1 == '\0')
return (0);
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
return (0);
}
