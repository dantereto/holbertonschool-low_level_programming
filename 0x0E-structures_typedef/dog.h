#ifndef HOLBERTON
#define HOLBERTON
/**
 * struct dog - data of the dog
 *@name: the name
 *@age: the age
 *@owner: the owner
 *Return: reyturn 0
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
