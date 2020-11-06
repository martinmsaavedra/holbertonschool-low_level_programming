#include "lists.h"
#include <stdbool.h>
/**
 *free_listint_safe - free all the elements of a listint
 *@h: head of list
 *Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{

	unsigned int k = 0;
	listint_t *aux = NULL, *fast_ptr, *slow_ptr;
	bool is_loop;

	if (h == NULL)
		return (0);
	fast_ptr = *h;
	slow_ptr = *h;
	is_loop = false;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			is_loop = true;
			break;
		}
	}
	if (is_loop)
	{
		slow_ptr = *h;
		fast_ptr = *h;
		fast_ptr = fast_ptr->next;
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
	else if (!is_loop)
	{
		k = 0;
		while (*h)
		{
			aux = *h;
			*h = (*h)->next;
			k++;
			free(aux);
		}
	}
	return (k);
}
