#include <stdio.h>
/**
 * main - main
 *Return: return 0
 */
int main(void)
{
  int num = 0;
  int num2 = 0;
  while (num < 100)
    {
      (num  = num / 10);
      (num = num % 10);
      while (num2 < 100)
	{
	  (num2 = num2 / 10);
	  (num2 = num2 % 10);
	  if (num <  num2 || (num == num2))
	{
	  putchar(num + '0');
	  putchar(' ' + '0');
	  putchar(num2 + '0');
	  if (num != 9 && num2 != 8)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
      num2++;
	}
      num++;
    }
  putchar('\n');
  return (0);
}
