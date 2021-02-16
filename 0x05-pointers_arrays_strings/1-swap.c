#include "holberton.h"
/**
 * swap_int - updates the value of n
 *@a: the first int
 *@b: the seconf int
 *Return: return 0
 */
void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}
