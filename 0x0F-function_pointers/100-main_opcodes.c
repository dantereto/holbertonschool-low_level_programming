#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *@argv: argv
 *@argc: argc
 *Return: reyturn 0
 */
int main(int argc, char *argv[])
{
int number = 0, i = 0;
char *cont;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}
cont  = (char *)main;
number = atoi(argv[1]);
while (i < number - 1)
{
printf("%02hhx ", cont[i]);
i++;
}
printf("02hhx\n");
return (0);
}
