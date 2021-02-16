#include "holberton.h"
/**
 * *_strcpy - copies the string pointed to by src
 *@src: a string
 *@dest: a string
 *Return: return 0
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
