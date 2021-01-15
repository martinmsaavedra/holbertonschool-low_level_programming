#include "hash_tables.h"

/**
  *hash_table_print - print the hash table
  *@ht: Hash table
  *Return: Nothing.
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;
	int flag = 0;

	if (ht)
	{
		printf("{");

		for (; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				aux = ht->array[i];
				while (aux != NULL)
				{
					if (flag == 1)
						printf(", ");
					printf("\'%s\': \'%s\'", aux->key, aux->value);
					aux = aux->next;
				}
				flag = 1;
			}
		}
		printf("}\n");
	}
}
