#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at index of the list
 * @head: head of the list
 * @index: the node
 * Return: NULL.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *new, *cont;
unsigned int number;
cont = *head;
if (index == 0)
{
*head = (*head)->next;
free(cont);
return (1);
}
for (number = 0; number < index - 1; number++)
{
if (cont == '\0')
return (-1);
cont = cont->next;
}
new = cont->next;
cont->next = new->next;
free(new);
return (1);
}
