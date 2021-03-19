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
if (h == '\0')
return (0);
while (h != '\0')
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
cont++;
}
return (cont);
}
