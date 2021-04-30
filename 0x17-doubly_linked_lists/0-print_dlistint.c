#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_dlistint - print elements of the list
 * @h: head of the list
 * Return: NULL.
 */
size_t print_dlistint(const dlistint_t *h)
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
