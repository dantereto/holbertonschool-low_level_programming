#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return a sum
 *@n: the numbers
 *Return: reyturn 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int i, result = 0;
if (n == 0)
return (0);
va_start(nums, n);
for (i = 0; i < n; i++)
result += va_arg(nums, unsigned int);
va_end(nums);
return (result);
}
