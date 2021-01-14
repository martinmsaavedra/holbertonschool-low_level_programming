#include "hash_tables.h"

/**
  *hash_table_delete - delete nodes and list
  *@ht: Hash table
  *Return: Nothing.
  */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL, *tmp = NULL;
	unsigned long int i = 0;

	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while (aux)
			{
				tmp = aux;
				aux = aux->next;
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
