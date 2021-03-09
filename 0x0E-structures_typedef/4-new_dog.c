#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
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
/**
 * new_dog - create a new dog
 *@name: the dog name
 *@age: the dog age
 *@owner: the owner name
 *Return: reyturn 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dogi;
dogi = malloc(sizeof(dog_t));
if (dogi == '\0')
return ('\0');
dogi->name = _strdup(name);
if (dogi->name == '\0')
{
free(dogi);
return ('\0');
}
dogi->owner = _strdup(owner);
if (dogi->owner == '\0')
{
free(dogi->name);
free(dogi);
return ('\0');
}
dogi->age = age;
return (dogi);
}
