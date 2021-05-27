#include "hash_tables.h"
#include <stdio.h>
/**
 * sum_listint -sum the nodes of the list
 * @head: head of the list
 * Return: NULL.
 */
void hash_table_print(const hash_table_t *ht)
{
  hash_node_t *hash = NULL;
  unsigned long int cont = 0;
  char *separator = "";
  if (!ht)
    return;
      printf("{");
      while (cont < ht->size)
	{
	  hash = ht->array[cont];
	  while (hash)
	    {
	      printf("%s", separator);
	      separator = ", ";
	      if (hash->key)
		printf("'%s': '%s'", hash->key, hash->value);
	      hash = hash->next;
	    }
	  cont++;
	}
      printf("}\n");
}
