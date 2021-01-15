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
	hash_node_t *new_node = NULL, *aux = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	aux = ht->array[index];

	while (aux)
	{
		if (strcmp(key, aux->key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
