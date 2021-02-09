#include <stdio.h>
#include "holberton.h"
/**
 *  main - main function
 *Return: return 0
 */
int main(void)
{
long int f1 = 1, f2 = 2, i;
long int next;
printf("%ld, ", f1);
for (i = 2; i < 50; i++)
{
printf("%ld, ", f2);
next = f1 + f2;
f1 = f2;
f2 = next;
}
printf("%ld\n", f2);
return (0);
}
