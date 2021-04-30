#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_listint -free the list
 * @head: head of the list
 * Return: NULL.
 */
void free_dlistint(dlistint_t *head)
{
  dlistint_t *tmp;
  while (head != '\0')
    {
      tmp = head;
      head = head->next;
      free(tmp);
    }
}
