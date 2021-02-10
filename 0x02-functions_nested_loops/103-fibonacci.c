#include "holberton.h"
#include <stdio.h>
/**
 *  main - main function
 *Return: return 0
 */
int main(void)
{
int two = 2;
int sum = 0;
int n = 1;
while (two < 4000000)
{
if (two % 2 == 0)
sum += two;
two += n;
two++;
}
printf("%d\n", sum);
return (0);
}
