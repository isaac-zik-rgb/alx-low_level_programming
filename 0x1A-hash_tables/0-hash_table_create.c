#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the hash table to be created
 * Return: Null if something go wrong or pointer to newly created 
table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *Ht;
  unsigned int i;
  Ht = malloc(sizeof(hash_table_t));
  if (Ht == NULL)
    return NULL;
  Ht->size = size;

  Ht->array = malloc(sizeof(hash_table_t *) * size);

  if (Ht->array == NULL)
    return NULL;

  for (i = 0; i < Ht->size; i++)
    Ht->array[i] = NULL;
  return (Ht);
}
