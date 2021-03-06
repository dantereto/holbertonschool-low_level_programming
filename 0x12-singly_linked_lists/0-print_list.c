#include "lists.h"
#include <stdio.h>
/**
 * print_list - print the elements of the list
 * @h: head of the linked list
 * Return: NULL.
 */
size_t print_list(const list_t *h)
{
size_t cont = 0;
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
printf("[%u] %s\n", h->len, h->str);
h = h->next;
cont++;
}
}
return (cont);
}
