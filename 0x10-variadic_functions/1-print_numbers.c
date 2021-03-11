#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 *@n: the numbers
 *@separator: the separator of the numbers
 *Return: reyturn 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list print;
unsigned int i;
va_start(print, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(print, unsigned int));
if (i == (n - 1) || separator == '\0')
;
else
printf("%s", separator);
}
va_end(print);
printf("\n");
}
