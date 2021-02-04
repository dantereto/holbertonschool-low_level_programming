#include <stdio.h>
/**
 * main - main
 *Return: return 0
 */
int main(void)
{
int num = 0;
int jump = 1;
int num2 = 0;
while (num <= 8)
{
num2 += jump;
while (num2 <= 9)
{
putchar(num + '0');
putchar(num2 + '0');
if (num != 8)
{
putchar(',');
putchar(' ');
}
num2++;
}
num2 = 0;
jump++;
num++;
}
putchar('\n');
return (0);
}
