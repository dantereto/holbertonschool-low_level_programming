#include "holberton.h"
#include <stdlib.h>
/**
 * binary_to_uint - change binary to decimal
 *@b: the binary
 *Return: reyturn 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int len, val = 0;
if (b == '\0')
return ('\0');
for (len = 0; b[len]; len++)
{
if (b[len] != '1' && b[len] != '0')
return (0);
if (b[len] == '1')
val = (val << 1) | 1;
else if (b[len] == '0')
val <<= 1;
else
break;
}
return (val);
}
