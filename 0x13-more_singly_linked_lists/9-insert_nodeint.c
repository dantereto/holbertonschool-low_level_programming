#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @idx: the node
 * @n: the number
 * Return: NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *cont;
unsigned int number;
new = malloc(sizeof(listint_t));
if (new == '\0')
return ('\0');
new->n = n;
cont = *head;
for (number = 0; number < idx - 1; number++)
{
if (cont == '\0' || cont->next == '\0')
return ('\0');
cont = cont->next;
}
new->next = cont->next;
cont->next = new;
return (new);
}
