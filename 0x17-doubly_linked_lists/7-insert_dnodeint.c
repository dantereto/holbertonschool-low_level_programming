#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: the node
 * @n: the number
 * Return: NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *cont = *h;
unsigned int num = 0;
new = malloc(sizeof(dlistint_t));
if (new == '\0')
return ('\0');
new->n = n;
if (idx == 0)
{
return (add_dnodeint(h, n));
}
idx -= 1;
for (; num < idx; num++)
{
if (cont == '\0')
return ('\0');
cont = cont->next;
}
if (cont->next == '\0')
return (add_dnodeint_end(h, n));
new->prev = cont;
new->next = cont->next;
cont->next->prev = new;
cont->next = new;
return (cont);
}
