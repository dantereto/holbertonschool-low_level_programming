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
int i, sum;
if (argc > 1)
{
for (i = 1 ; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
else 
printf("0\n");
return (0);
}
