#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *@string: the string
 *Return: return 0
 */
char *string_toupper(char *string)
{
int i = 0;
while (string[i] != '\0')
{
if (string[i] >= 97 && string[i] <= 122)
{
string[i] -= 32;
}
i++;
}
return (string);
}
