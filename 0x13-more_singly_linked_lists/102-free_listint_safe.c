#include "lists.h"
#include <stdbool.h>
/**
 *free_listint_safe - free all the elements of a listint
 *@h: head of list
 *Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	int number = 0, i;
	listint_t *aux = NULL, *fast_ptr, *slow_ptr;
	bool is_loop;

	if (h == NULL)
		return (0);
	fast_ptr = *h;
	slow_ptr = *h;
	is_loop = false;

	while (fast_ptr && slow_ptr && fast_ptr->next)
	{
		fast_ptr = fast_ptr->next->next;
		slow_ptr = slow_ptr->next;
		number++;
		if (slow_ptr == fast_ptr)
		{
			is_loop = true;
			break;
		}
	}
	if (is_loop)
	{
		fast_ptr = (*h)->next;
		slow_ptr = *h;
		for (i = 0; i <= number + 1; i++)
		{
			aux = slow_ptr;
			slow_ptr = slow_ptr->next;
			fast_ptr = fast_ptr->next;
			free(slow_ptr);
		}
	}
	if (!is_loop)
	{
		while (*h)
		{
			aux = *h;
			*h = (*h)->next;
			number++;
			free(aux);
		}
	}
	return (number);
}
