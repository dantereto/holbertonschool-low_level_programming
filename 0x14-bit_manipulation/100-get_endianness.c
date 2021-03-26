#include "holberton.h"
#include <stdlib.h>
/**
 * get_endianness - check if its litte endian or not
 *Return: reyturn 0
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;
if (*c != '\0')
return (1);
else

return (0);
}
