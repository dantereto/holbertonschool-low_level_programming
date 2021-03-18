#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add news nodes from the end
 * @head: head of the list
 * @str: the string
 * Return: NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
char *space;
int i;
new = malloc(sizeof(list_t));
if (new == '\0')
return ('\0');
space = strdup(str);
for (i = 0; str[i] != '\0'; i++)
;
new->str = space;
new->len = i;
new->next = NULL;
if (*head != '\0')
{
list_t *last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}
else
*head = new;
return (*head);
}
