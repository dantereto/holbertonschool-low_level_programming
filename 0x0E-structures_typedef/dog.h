#ifndef HOLBERTON
#define HOLBERTON
/**
 * struct dog - data of the dog
 *@name: the name
 *@age: the age
 *@owner: the owner
 *Return: reyturn 0
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
