#include "holberton.h"
/**
 * _isalpha -  checks for alphabetic character
 *@c: the number
 *Return: return 0
 */
int _isalpha(int c)
{
if (c > 65 && c < 123)
return (1);
else
return (0);
}
