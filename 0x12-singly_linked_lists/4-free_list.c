#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list -free the list
 * @head: head of the list
 * Return: NULL.
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head != '\0')
{
tmp = head;
free(head->str);
head = head->next;
free(tmp);
}
}
