#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - add news nodes to the list
 * @head: head of the list
 * @n: the number
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
