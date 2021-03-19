#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void myStartupFun(void) __attribute__ ((constructor));
/**
 * myStartupFun - add news nodes to the list
 * Return: NULL.
 */
void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
