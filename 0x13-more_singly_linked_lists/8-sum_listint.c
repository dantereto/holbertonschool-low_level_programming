#include "lists.h"
/**
 * sum_listint -sum the nodes of the list
 * @head: head of the list
 * Return: NULL.
 */
int sum_listint(listint_t *head)
{
int number = 0;
if (head == '\0')
return (0);
while (head != '\0')
{
number = number + head->n;
head = head->next;
}
return (number);
}
