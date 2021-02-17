#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - generates a password for 101-crackme
 * Return: 0 on success
 */
int main(void)
{
int cont;
int ran;
int check = 2772;
srand(time(NULL));
for (cont = 0; check > 122; cont++)
{
ran = (rand() % 100);
printf("%c", ran);
check -=  ran;
}
printf("%c", check);
return (0);
}
