#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print the elements of the list
 * @h: head of the linked list
 * Return: NULL.
 */
size_t print_listint(const listint_t *h)
{
size_t cont = 0;
while (h != '\0')
{
printf("%d\n", h->n);
h = h->next;
cont++;
}
return (cont);
}
