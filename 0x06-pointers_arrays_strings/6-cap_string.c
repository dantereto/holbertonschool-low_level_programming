#include "holberton.h"
/**
 * cap_string - cap_string
 *@string: the string
 *Return: return 0
 */
char *cap_string(char *string)
{
int i  = 0;
while (string[i] != '\0')
{
if (string[i] >= 97 && string[i] <= 122)
{
if (i == 0)
string[i] -= 32;
else if (string[i - 1] == ',' || string[i - 1] == ';'
|| string[i - 1] == '.' ||
string[i - 1] == 33 || string[i - 1] == '"' || string[i - 1] ==
')' || string[i - 1] == '('
|| string[i - 1] == '{' || string[i - 1] == '}'
|| string[i - 1] == '?' || string[i - 1] == '\n'
|| string[i - 1] == 32 || string[i - 1] == '\t')
string[i] -= 32;
}
i++;
}
return (string);
}
