#include "holberton.h"
#include <stdio.h>

/**
 *  main - main
 *Return: return 0
 */
int main(void)
{
int f1 = 1, f2 = 2, i;
int next;
printf("%d, ", f1);
for (i = 2; i < 98; i++)
{
printf("%d, ", f2);
next = f1 + f2;
f1 = f2;
f2 = next;
}
printf("%d\n", f2);
return (0);
}
