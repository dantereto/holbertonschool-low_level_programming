#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_listint_safe - add news nodes from the end
 * @h: head of the list
 * Return: NULL.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *position, *next_p = *h;
size_t cont = 0;
if (*h == '\0')
return ('\0');
if (next_p == 0)
exit(98);
while (next_p != 0)
{
position = next_p;
next_p = next_p->next;
cont++;
free(next_p);
if (position <= next_p)
{
break;
}
}
*h = 0;
return (cont);
}
