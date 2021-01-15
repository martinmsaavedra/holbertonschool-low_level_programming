#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size: size of hash table
 *Return: pointer to hash table
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i;

	if (!size)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
	{
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_table->array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}
