#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - add news nodes to the list
 * @head: head of the list
 * @n: the number
 * Return: NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == '\0')
return ('\0');
new->n = n;
new->next = *head;
*head = new;
return (new);
}
