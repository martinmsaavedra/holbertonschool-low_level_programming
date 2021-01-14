#include "hash_tables.h"

/**
  *key_index: gives you the index of a key.
  *@str: string.
  *@size: size of the array.
  *Return: index of the hash table.
  */

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i = 0;
    hash_node_t *aux = NULL;

    printf("{");
    for (; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            aux = ht->array[i];
            while(aux->next != NULL)
            {
                printf("\'%s\': \'%s\', ", aux->key, aux->value);
                aux = aux->next;
            }
        }
    }
    printf("}\n");
}