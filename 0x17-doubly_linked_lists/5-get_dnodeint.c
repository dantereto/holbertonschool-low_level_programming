#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of the list
 * @head: head of the list
 * @index: the nth node
 * Return: NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int cont = 0;
while (head != '\0')
{
if (cont == index)
{
return (head);
}
cont++;
head = head->next;
}
return ('\0');
}
