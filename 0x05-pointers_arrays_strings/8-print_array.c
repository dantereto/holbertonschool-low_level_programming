#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints n elements of an array of integers
 *@n:the numbers of elements
 *@a:array pointer
 *Return: return 0
 */
void print_array(int *a, int n)
{
int cont  = 0;
for (n--; n >= 0; n--, cont++)
{
printf("%d", a[cont]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
