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
      putchar((num / 10) + '0');
      putchar((num % 10) + '0');
      while (num < 100)
	{
      if (num <  99)
	{
	  putchar(',');
	  putchar(' ');
	}
      num++;
	}
    }
  putchar('\n');
  return (0);
}
