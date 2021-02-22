#include "holberton.h"
/**
 * _memcpy - cap_string
 *@dest: firts pointer
 *@src: second pointer
 *@n: the int
 *Return: return 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
