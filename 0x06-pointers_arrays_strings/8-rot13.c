#include "holberton.h"
/**
 * rot13 - encodes a string into rot13
 *@string: the string
 *Return: return 0
 */
char *rot13(char *string)
{
int i, cop;
char rot[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char num[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; string[i]; i++)
{
for (cop = 0; rot[cop]; cop++)
{
if (string[i] == rot[cop])
{
string[i] = num[cop];
break;
}
}
}
return (string);
}
