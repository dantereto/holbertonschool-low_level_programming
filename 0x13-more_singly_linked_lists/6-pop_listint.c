#include "lists.h"
/**
 * pop_listint - delete the head of the list
 * @head: head of the list
 * Return: NULL.
 */
int pop_listint(listint_t **head)
{
listint_t *remove;
int num;
if (*head == '\0')
return (0);
num = (*head)->n;
remove = *head;
*head = (*head)->next;
free(remove);
return (num);
}
