#include <stdio.h>
#include "holberton.h"
/**
 *  main - main function
 *Return: return 0
 */
int main(void)
{
int f1 = 1, f2 = 1, i;
int next;
printf("%d,", f1);
for (i = 1; i < 50; i++)
{
printf("%d,", f2);
next = f1 + f2;
f1 = f2;
f2 = next;
}
printf("%d\n", f2);
return (0);
}
