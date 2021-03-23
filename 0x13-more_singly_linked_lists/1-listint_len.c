#include "lists.h"
#include <stdio.h>
/**
 * listint_len - return the elements of the list
 * @h: head of the linked list
 * Return: NULL.
 */
size_t listint_len(const listint_t *h)
{
size_t cont = 0;
while (h != '\0')
{
h = h->next;
cont++;
}
return (cont);
}
