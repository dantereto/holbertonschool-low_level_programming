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
unsigned int number = 0;
new = malloc(sizeof(dlistint_t));
if (new == '\0')
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *h;
*h = new;
return (new);
}
for (number = 0; number < idx - 1; number++)
{
if (cont == NULL)
return (NULL);
cont = cont->next;
}
new->next = cont->next;
new->prev = cont;
cont->next->prev = new;
cont->next = new;
return (cont);
}
