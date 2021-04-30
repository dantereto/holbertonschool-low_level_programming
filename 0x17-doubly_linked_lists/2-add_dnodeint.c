#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint - add news nodes to the list
 * @head: head of the list
 * @n: the number
 * Return: NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == '\0')
return ('\0');
new->prev = NULL;
new->n = n;
new->next = *head;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (new);
}
