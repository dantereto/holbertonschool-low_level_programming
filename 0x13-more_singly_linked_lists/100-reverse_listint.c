#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * reverse_listint -reverse the list
 * @head: head of the list
 * Return: NULL.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *new;
if (head == NULL || *head == NULL)
return (NULL);
prev = *head;
new = (*head)->next;
*head = (*head)->next;
prev->next = NULL;
while (*head != NULL)
{
*head = (*head)->next;
new->next = prev;
prev = new;
new = *head;
}
*head = prev;
return (*head);
}
