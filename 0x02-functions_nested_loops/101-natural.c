#include "holberton.h"
#include <stdio.h>
/**
 *  main - sum of all the multiples of 3 or 5
 *Return: return 0
 */
int main(void)
{
int n = 0;
int sum;
while (n < 1024)
{
if (n % 3 == 0)
sum += n;
if (n % 5 == 0)
sum += n;
n++;
}
printf("%d\n", sum);
return (0);
}
