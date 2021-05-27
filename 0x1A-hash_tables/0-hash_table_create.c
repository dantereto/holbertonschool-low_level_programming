#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 * Return: NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash;
unsigned long int i;
if (size == 0)
return (NULL);
hash = malloc(sizeof(hash_table_t));
if (hash == '\0')
return ('\0');
hash->array = malloc(sizeof(hash_table_t *) * size);
if (hash->array == '\0')
return ('\0');
hash->size = size;
for (i = 0; i < size; i++)
hash->array[i] = NULL;
return (hash);
}
