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
int i = 0, sum = 0;
if (argc < 1)
return (0);
for (i = 1 ; i < argc; i++)
{
if (atoi(argv[i]) == 0)
{
printf("%s\n", "Error");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
