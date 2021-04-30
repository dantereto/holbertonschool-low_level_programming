#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - add news nodes to the end of list
 * @head: head of the list
 * @n: the number
 * Return: NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == '\0')
return ('\0');
new->prev = NULL;
new->n = n;
new->next = NULL;
if (*head != NULL)
{
dlistint_t *end = *head;
while (end->next != '\0')
end = end->next;
end->next = new;
new->prev = end;
}
else
*head = new;
return (new);
}
