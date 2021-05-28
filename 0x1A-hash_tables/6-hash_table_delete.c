#include "hash_tables.h"
/**
 * hash_table_delete - delete a nodem of the list
 * @ht: head of the list
 * Return: NULL.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *hash, *copy;
unsigned long int cont = 0;
if (!ht)
return;
else
{
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
}
free(ht->array);
free(ht);
}
