#include "holberton.h"
/**
 * leet - encodes a string into 1337
 *@string: the string
 *Return: return 0
 */
char *leet(char *string)
{
int i = 0, cop;
char leet[] = "aAeEoOtTlL";
char num[] = "4433007711";
for (i = 0; string[i]; i++)
{
for (cop = 0; leet[cop]; cop++)
{
if (string[i] == leet[cop])
string[i] = num[cop];
}
}
return (string);
}
