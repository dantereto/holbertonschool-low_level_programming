#include "hash_tables.h"
/**
 * hash_table_get -set the table
 * @ht: the hash tables
 * @key: the key
 * Return: NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *copy;
if (ht == '\0' || key == '\0')
return ('\0');
index = key_index((const unsigned char *)key, ht->size);
copy = ht->array[index];
while (copy)
{
if (strcmp(copy->key, key) == 0)
return (copy->value);
copy = copy->next;
}
return (NULL);
}
