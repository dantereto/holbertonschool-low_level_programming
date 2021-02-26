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
(void) argc;
if (argv[1] && argv[2])
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
printf("Error \n");
return (-1);
}
