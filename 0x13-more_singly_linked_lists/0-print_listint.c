#include "lists.h"
/**
 *print_listint - prints all the elements of a listint
 *@h: head of list
 *Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int number = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
