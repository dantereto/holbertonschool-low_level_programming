#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the dog
 *@d: the string
 *Return: reyturn 0
 */
void free_dog(dog_t *d)
{
if (d != '\0')
{
free(d->name);
free(d->owner);
free(d);
}
}