#include "lists.h"
#include <stdbool.h>
/**
 *free_listint_safe - free all the elements of a listint
 *@h: head of list
 *Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t k = 0;
	listint_t *aux = NULL, *fast_ptr, *slow_ptr;

	if (h == NULL || *h)
		return (0);
	fast_ptr = (*h)->next;
	slow_ptr = *h;

	while (fast_ptr && fast_ptr < slow_ptr)
	{
		aux = slow_ptr;
		fast_ptr = fast_ptr->next;
		slow_ptr = slow_ptr->next;
		k++;
		free(aux);
	}
	free(slow_ptr);
	k++;
	*h = NULL;
	return (k);
}
