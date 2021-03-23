#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_listint_safe - add news nodes from the end
 * @head: head of the list
 * Return: NULL.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *position, *next_p = head;
size_t cont;
if (head == '\0')
exit(98);
while (next_p != '\0')
{
position = next_p;
next_p = next_p->next;
cont++;
printf("[%p] %d\n", (void *) position, position->n);
if (position < next_p)
{
printf("->[%p] %d\n", (void *) next_p, next_p->n);
exit(98);
}
}
return (cont);
}
