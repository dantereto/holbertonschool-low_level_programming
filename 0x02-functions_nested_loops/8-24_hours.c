#include "holberton.h"
/**
 *  jack_bauer - print minuts
 *Return: return 0
 */
void jack_bauer(void)
{
int min;
int hour = 0;
while (hour < 24)
{
min = 0;
while (min < 60)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
min++;
}
hour++;
}
}
