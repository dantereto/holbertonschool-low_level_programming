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
return (NULL);
if (idx == 0)
{
new->next = *h;
*h = new;
return (new);
}
for (; num < idx; num++)
{
if (cont == NULL)
return (NULL);
cont = cont->next;
}
new->n = n;
new->next = cont->next;
new->prev = cont;
cont->next->prev = new;
cont->next = new;
return (cont);
}
