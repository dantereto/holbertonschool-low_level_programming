#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 *@n: the numbers
 *@separator: the separator of the numbers
 *Return: reyturn 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list print;
unsigned int i;
char *a;
va_start(print, n);
for (i = 0; i < n; i++)
{
a = va_arg(print, char *);
if (a == '\0')
printf("(nil)");
else
{
printf("%s", a);
if (i == (n - 1) || separator == '\0')
;
else
printf("%s", separator);
}
}
va_end(print);
printf("\n");
}
