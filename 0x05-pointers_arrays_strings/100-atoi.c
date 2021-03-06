#include "holberton.h"
/**
 * _atoi - make an atoi function
 *@s: the string
 *Return: return 0
 */
int _atoi(char *s)
{
int res = 0;
int sign = -1;
int i = 0;
for (; s[i] != '\0' && (s[i] < '0' || s[i] > '9'); i++)
{
if (s[i] == '-')
sign *= -1;
}
for (; s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'); i++)
res = (res * 10) - (s[i] - '0');
return (sign *res);
}
