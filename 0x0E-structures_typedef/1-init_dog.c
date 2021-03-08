#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - start the dog
 *@d: the struc
 *@name: the dog name
 *@age: the dog age
 *@owner: the owner name
 *Return: reyturn 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
