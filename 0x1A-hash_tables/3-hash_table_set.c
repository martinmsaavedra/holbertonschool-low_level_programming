#include "hash_tables.h"

/**
  *hash_table_set - adds an element to the hash table.
  *@ht: hash table.
  *@key: key.
  *@value: value of key
  *Return: 0 on successs, 1 otherwise.
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (EXIT_FAILURE);

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (EXIT_FAILURE);

	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;

	if (ht->array[index] != NULL)
		new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (EXIT_SUCCESS);
}
