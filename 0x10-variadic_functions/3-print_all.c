#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_int - print int
 *@entero: the int
 *Return: reyturn 0
 */
void print_int(va_list entero)
{
printf("%d", va_arg(entero, int));
}
/**
 * print_char - print strings
 *@caracter: the char
 *Return: reyturn 0
 */
void print_char(va_list caracter)
{
char c;
c = va_arg(caracter, int);
printf("%c", c);
}
/**
 * print_float - print floats
 *@flotante: the float
 *Return: reyturn 0
 */
void print_float(va_list flotante)
{
printf("%f", va_arg(flotante, double));
}
/**
 * print_str - print strings
 *@pointer: the string
 *Return: reyturn 0
 */
void print_str(va_list pointer)
{
char *s;
s = va_arg(pointer, char *);
if (s == '\0')
s = "(nil)";
printf("%s", s);
}
/**
 * print_all - print all the variables
 *@format: the const value
 *Return: reyturn 0
 */
void print_all(const char * const format, ...)
{
va_list list;
all_t all[] = {
{"i", print_int},
{"c", print_char},
{"f", print_float},
{"s", print_str},
{NULL, NULL}
};
int i = 0, j = 0;
char *separator = "";
va_start(list, format);
while (format != NULL && format[j] != '\0')
{
i = 0;
while (i < 4)
{
if (format[j] == *(all[i]).all)
{
printf("%s", separator);
all[i].f(list, separator);
separator = ", ";
}
i++;
}
j++;
}
va_end(list);
printf("\n");
}
