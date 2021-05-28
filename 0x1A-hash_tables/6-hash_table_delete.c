#include "hash_tables.h"
/**
 * sum_listint -sum the nodes of the list
 * @head: head of the list
 * Return: NULL.
 */
void hash_table_delete(hash_table_t *ht)
{
  hash_node_t *hash, *copy;
  unsigned long int cont = 0;
  if (!ht)
    return;
  while (cont < ht->size)
    {
      hash = ht->array[cont];
      while (hash)
	{
	  copy = hash;
	  hash = hash->next;
	  free(copy->key);
	  free(copy->value);
	  free(copy);
	}
      cont++;
    }
  free(ht->array);
  free(ht);
}
