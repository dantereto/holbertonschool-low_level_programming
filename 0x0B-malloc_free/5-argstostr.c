#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program.
 *@ac: argc
 *@av: argv
 *Return: reyturn 0
 */
char *argstostr(int ac, char **av)
{
int i = 0, j = 0, cont = 0, copy = 0;
char *p;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
cont++;
}
p = malloc(sizeof(char) * cont);
if (p == '\0')
return ('\0');
i = 0;
j = 0;
copy = 0;
for (i = 0; i < ac; i++)
{
  for (j = 0; av[i][j]; j++, copy++)
p[copy] = av[i][j];
p[copy] = '\n';
copy++;
}
p[copy] = '\0';
return (p);
}
