#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of the list
 * @head: head of the list
 * @index: the nth node
 * Return: NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
