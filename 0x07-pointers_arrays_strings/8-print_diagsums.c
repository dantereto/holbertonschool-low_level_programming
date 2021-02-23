#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print a nums in diagonal
 *@a: the coordenates
 *@size:the size
 *Return: return 0
 */
void print_diagsums(int *a, int size)
{
int i, sum1, sum2;
for (i = 0; i < size; i++)
{
sum1 += *(a + ((i * size) + i));
}
for (i = 0; i < size; i++)
{
sum2 += *(a + (size - 1) * (i + 1));
}
printf("%d, %d\n", sum1, sum2);
}
