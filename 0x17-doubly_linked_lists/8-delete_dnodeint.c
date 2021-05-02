#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete a node at index of the list
 * @head: head of the list
 * @index: the node
 * Return: NULL.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *cont = *head;
unsigned int num;
if (*head == '\0')
return (-1);
for (; num < index; num++)
{
if (cont == '\0')
return (-1);
cont = cont->next;
}
if (cont == *head)
{
*head = cont->next;
}
else
{
cont->prev->next = cont->next;
if (cont->next != '\0')
cont->next->prev = cont->prev;
}
free(cont);
return (1);
}
