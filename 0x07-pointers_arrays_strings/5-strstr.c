#include "holberton.h"
/**
 * _strstr -  locates a substring
 *@needle: the subtring
 *@haystack: the string
 *Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, copy;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0, copy = i; needle[j] != '\0'; j++, copy++)
{
if (haystack[copy] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
return ('\0');
}
