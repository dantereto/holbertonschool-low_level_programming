#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the characters
 *@argc: argc
 *@argv: argv
 *Return: return 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
