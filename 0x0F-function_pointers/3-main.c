#include "3-calc.h"
/**
 * main - main function
 *@argv: argv
 *@argc: argc
 *Return: reyturn 0
 */
int main(int argc, char *argv[])
{
int num1 = atoi(argv[1]), num2 = atoi(argv[3]);
int result;
if (argc == 0)
printf("holi");
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
&& argv[2][0] != '/' && argv[2][0] != '%')
{
printf("Error\n");
exit(99);
}
result = (*get_op_func(argv[2]))(num1, num2);
if (result == '\0')
{
printf("Error\n");
exit(99);
}
printf("%d\n", result);
return (0);
}
