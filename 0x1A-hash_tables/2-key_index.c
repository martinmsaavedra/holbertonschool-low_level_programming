#include "hash_tables.h"

/**
  *key_index - gives you the index of a key.
  *@key: the key
  *@size: size of the array.
  *Return: index of the hash table.
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0, index = 0;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
