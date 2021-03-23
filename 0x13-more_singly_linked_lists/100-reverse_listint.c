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
if (head == '\0' || *head == '\0')
return ('\0');
prev = *head;
new = (*head)->next;
*head = (*head)->next;
prev->next = '\0';
while (*head != '\0')
{
*head = (*head)->next;
new->next = prev;
prev = new;
new = *head;
}
*head = prev;
return (*head);
}
