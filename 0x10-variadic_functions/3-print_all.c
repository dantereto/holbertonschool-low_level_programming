#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print numbers
 *@n: the numbers
 *@separator: the separator of the numbers
 *Return: reyturn 0
 */
void print_int(va_list entero)
{
  printf("%i", va_arg(entero, int));
}
void print_char(va_list caracter)
{
  print("%c", va_arg(caracter, char));
}
void print_float(va_list flotante)
{
  print("%f", va_arg(flotante, double));
}
void print_str(va_list *str)
{
  char *s;
  s = va_arg(str, char *);
  if (s == '\0')
    printf("(nil)");
  print("%s", s;
}
/**
 * get_op_func - search the sign
 *@s: the sign
 *Return: reyturn 0
 */
void print_all(const char * const format, ...)
{
  va_list list;
 all_t alp [] = {
    {"c", print_int},
    {"i", print_char},
    {"f", print_float},
    {"s", print_str},
    {NULL, NULL}
  };
    int i = 0;
    char *separator = "";
    va_start(list, format);
    while (i < 4)
      {
	if (*format == alp[i].all)
	  {
	    printf("%s", separator);
	    alp[i].f(list);
	    separator = ", ";
	  }
	i++;
      }
    printf("\n");
    va_end(list);
}
