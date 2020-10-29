#include "lists.h"
/**
 *list_len - prints number of elements
 *@h: pointer to first element of list
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int number = 0;

	if (!h)
		return (0);
	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
