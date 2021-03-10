#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 *@name: the name to print
 *@f: the f pointer
 *Return: reyturn 0
 */
void print_name(char *name, void (*f)(char *))
{
if (name != '\0' && f != '\0')
f(name);
}
