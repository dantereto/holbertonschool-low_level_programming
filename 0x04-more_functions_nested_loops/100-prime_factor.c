#include <stdio.h>
/**
 * main - print numbers
 *Return: return 0
 */
int main(void)
{
long int n = 612852475143;
long int cont, result;
for (cont = 2; cont < n; cont++)
{
  if (n % cont == 0)
    {
      result = cont;
while (n % cont == 0)
{
n /= cont;
}
    }
 }
printf("%ld\n", result);
return (0);
}
