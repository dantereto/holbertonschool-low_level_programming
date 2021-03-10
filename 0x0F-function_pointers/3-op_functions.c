#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - return a + b
 *@a: first number
 *@b: second number
 *Return: reyturn 0
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - return a - b
 *@a: first number
 *@b: second number
 *Return: reyturn 0
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - return a * b
 *@a: first number
 *@b: second number
 *Return: reyturn 0
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - return a / b
 *@a: first number
 *@b: second number
 *Return: reyturn 0
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - a % b
 *@a: firts number
 *@b: second number
 *Return: reyturn 0
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
