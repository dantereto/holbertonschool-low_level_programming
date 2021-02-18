#include "holberton.h"
/**
 * _strncpy - copie a string
 *@dest: the string
 *@src: the second string
 *@n: numbers of times to copy
 *Return: return 0
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
