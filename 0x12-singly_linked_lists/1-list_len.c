#include "lists.h"
#include <stdio.h>
/**
 * list_len - return the elements of the list
 * @h: head of the linked list
 * Return: NULL.
 */
size_t list_len(const list_t *h)
{
size_t cont = 0;
while (h != '\0')
{
h = h->next;
cont++;
}
return (cont);
}
