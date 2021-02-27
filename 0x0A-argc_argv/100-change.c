#include <stdio.h>
#include <stdlib.h>
/**
 * main - make a change
 *@argc: argc
 *@argv: argv
 *Return: reyturn 0
 */
int main(int argc, char *argv[])
{
int money, coins = 0;
money = atoi(argv[1]);
while (money > 0)
{
if (argc == 2)
{
if (money >= 25)
{
coins++;
money -= 25;
}
else if (money >= 10)
{
money -= 10;
coins++;
}
else if (money >= 5)
{
money -= 5;
coins++;
}
else if (money >= 2)
{
money -= 2;
coins++;
}
else if ((money - 1) >= 0)
{
money -= 2;
coins++;
}
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", coins);
return (0);
}
