#include "holberton.h"
/**
 * _strncat - concatenates two strings
 *@dest: the string
 *@src: the second string
 *@n:number to print
 *Return: return 0
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0' && n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}
dest[i] = '\0';
return (dest);
}
