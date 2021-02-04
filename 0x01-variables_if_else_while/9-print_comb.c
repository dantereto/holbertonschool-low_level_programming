#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main
 *Return: return 0
 */
int main(void)
{
char num = '0';
while (num <= '9')
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
