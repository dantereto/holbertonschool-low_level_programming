#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 *@argc: argc
 *@argv: argv
 *Return: reyturn 0
 */
int main(int argc, char *argv[])
{
int i = 0, sum = 0, j;
if (argc > 1)
{
for (i = 1 ; i < argc; i++)
{
for (j = 0; argv[i][j] != 0; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
else
printf("0\n");
return (0);
}
