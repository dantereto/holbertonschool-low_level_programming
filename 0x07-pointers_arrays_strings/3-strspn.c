#include "holberton.h"
/**
 * _strspn -  gets the length of a prefix substring
 *@s: the string
 *@accept: the condition
 *Return: return 0
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int cont = 0;
while (*s != '\0')
{
i = 0;
while (accept[i])
{
if (*s == accept[i])
{
cont++;
break;
}
i++;
}
if (accept[cont - 1] == '\0')
return (cont);
s++;
}
return (cont);
}
