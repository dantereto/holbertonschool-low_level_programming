#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - add news nodes from the end
 * @head: head of the list
 * @n: the number
 * Return: NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == '\0')
return (new);
new->n = n;
new->next = NULL;
if (*head != '\0')
{
listint_t *end = *head;
while (end->next != '\0')
end = end->next;
end->next = new;
}
else
*head = new;
return (*head);
}
