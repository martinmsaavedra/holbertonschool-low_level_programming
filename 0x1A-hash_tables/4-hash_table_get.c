#include "hash_tables.h"
/**
  *key_index: gives you the index of a key.
  *@ht: hash table.
  *@key: key.
  *Return: 0 on successs, NULL otherwise.
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *temp = NULL;

    if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
        
    index = key_index((const unsigned char *)key, ht->size);

    if (ht->array[index] != NULL)
    {
        temp = ht->array[index];
        while (temp != NULL)
        {
            if (strcmp(key, temp->key) == 0)
                return (temp->value);
            temp = temp->next;  
        }
    }
    return (NULL);
}