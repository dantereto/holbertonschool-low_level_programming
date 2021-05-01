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
if (h == '\0')
return ('\0');
if (idx == 0)
{
add_dnodeint(h, n);
}
 for (number = 0; number < idx - 1; number++)
   {
     if (cont == '\0')
       return ('\0');
     cont = cont->next;
}
if (cont->next == '\0')
   {
     add_dnodeint_end(h, n);
   }
new = malloc(sizeof(dlistint_t));
if (new == '\0')
return ('\0');
new->n = n;
new->next = cont->next;
new->prev = cont;
cont->next->prev = new;
cont->next = new;
return (cont);
}
