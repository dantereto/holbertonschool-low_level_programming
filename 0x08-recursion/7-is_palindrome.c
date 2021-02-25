#include "holberton.h"
/**
 * _strlen_recursion - make a strlen
 *@s: the pointer
 *Return: return 0
 */
int _strlen_recursion(char *s)
{
int len  = 0;
if (*s != '\0')
{
len += _strlen_recursion(s + 1);
len++;
}
return (len);
}
/**
 * search - check the palindrome
 *@s: the pointer
 *@len:the lenght
 *Return: return 0
 */
int search(char *s, int len)
{
if (*s == 0)
return (1);
else if (*s != *(s + len - 1))
return (0);
else
return (search(s + 1, len - 2));
}
/**
 * is_palindrome - make a palindrome
 *@s: the pointer
 *Return: return 0
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
if (len <= 1)
return (1);
return (search(s, len));
}
