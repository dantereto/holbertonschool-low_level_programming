#include <stdio.h>
/**
 * main - main
 *Return: return 0
 */
int main(void)
{
int num = '0';
int num3 = '2';
int num2 = '1';
while (num <= '7')
{
while (num2 <= '8')
{
while (num3 <= '9')
{
putchar(num);
putchar(num2);
putchar(num3);
if (num != '7' || num2 != '8' || num3 != '9')
{
putchar(',');
putchar (' ');
}
num3++;
}
num2++;
num3 = num2 + 1;
}
num++;
num2 = num + 1;
num3 = num2 + 1;
}
putchar('\n');
return (0);
}
