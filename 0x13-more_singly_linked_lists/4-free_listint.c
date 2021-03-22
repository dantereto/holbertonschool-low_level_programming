#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list -free the list
 * @head: head of the list
 * Return: NULL.
 */
void free_listint(listint_t *head)
{
  listint_t *tmp;
  while (head != '\0')
    {
      tmp = head;
      head = head->next;
      free(tmp);
    }
}
