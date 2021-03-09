#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 *@name: the dog name
 *@age: the dog age
 *@owner: the owner name
 *Return: reyturn 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
char *nam, *own;
int cont, cont1, i;
struct dog *dogi;
dogi = malloc(sizeof(struct dog));
if (dogi == '\0')
return ('\0');
for (cont = 0; name[cont] != '\0'; cont++)
;
for (cont1 = 0; owner[cont1] != '\0'; cont1++)
;
nam = malloc(sizeof(char) * cont + 1);
if (nam == '\0')
{
free(dogi);
return ('\0');
}
own = malloc(sizeof(char) * cont1 + 1);
if (own == '\0')
{
free(name);
free(dogi);
return ('\0');
}
for (i = 0; i <= cont; i++)
nam[i] = name[i];
for (i = 0; i <= cont1; i++)
own[i] = owner[i];
dogi->name = nam;
dogi->age = age;
dogi->owner = own;
return (dogi);
}
