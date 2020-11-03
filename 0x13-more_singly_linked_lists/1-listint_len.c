#include "lists.h"
/**
 *listint_len - returns number of elements of a listint
 *@h: head of list
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int number = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		number++;
	}
	return (number);
}
