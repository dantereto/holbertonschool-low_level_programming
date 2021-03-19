#include "lists.h"
#include <stdio.h>
/**
 * print_list - print the elements of the list
 * @h: head of the linked list
 * Return: NULL.
 */
size_t print_list(const list_t *h)
{
size_t cont;
while (h != '\0')
{
if (h->str == '\0')
{
printf("[0] %p\n", h->str);
h = h->next;
cont++;
}
else
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
cont++;
}
}
return (cont);
}
