#include "holberton.h"
/**
 * _isupper -  checks for uppercase character
 *@c: the number
 *Return: return 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
