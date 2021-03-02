#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copy an strin
 *@str: the string
 *Return: reyturn 0
 */
char *_strdup(char *str)
{
int cont, i;
char *p;
if (str == NULL)
return ('\0');
for (cont = 0; str[cont] != '\0'; cont++)
;
p = malloc(sizeof(char) * cont + 1);
if (p == 0)
return ('\0');
for (i = 0; i < cont; i++)
{
p[i] = str[i];
}
p[i] = '\0';
return (p);
}
