#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - return the le of the list
 * @h: head of the list
 * Return: NULL.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t cont = 0;
while (h != '\0')
{
h = h->next;
cont++;
}
return (cont);
}
