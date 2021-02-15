#include "holberton.h"
/**
 * _strlen - checks the lenght of a string
 *@s: the string
 *Return: return 0
 */
int _strlen(char *s)
{
int cont = 0;
while (s[cont] != '\0')
{
cont++;
}
return (cont);
}
