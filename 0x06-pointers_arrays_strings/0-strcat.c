#include "holberton.h"
/**
 * _strcat - concatenates two strings
 *@dest: the string
 *@src: the second string
 *Return: return 0
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
