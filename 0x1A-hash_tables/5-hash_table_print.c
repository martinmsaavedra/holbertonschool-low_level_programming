#include "hash_tables.h"

/**
  *hash_table_print - print the hash table
  *@ht: Hash table
  *Return: Nothing.
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *aux = NULL;
	int count = 0;

	for (; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
			count++;
	}

	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while (aux != NULL)
			{
				printf("\'%s\': \'%s\'", aux->key, aux->value);
				if (!(count - 1 == 0 && aux->next == NULL))
					printf(", ");
				aux = aux->next;
			}
			count--;
		}
	}
	printf("}\n");
}
