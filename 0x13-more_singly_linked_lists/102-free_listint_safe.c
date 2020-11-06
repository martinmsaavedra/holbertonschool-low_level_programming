#include "lists.h"
#include <stdbool.h>
/**
 *free_listint_safe - free all the elements of a listint
 *@h: head of list
 *Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{

	unsigned int k = 1, i;
	listint_t *aux = NULL, *fast_ptr, *slow_ptr,* ptr1, *ptr2;
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
		ptr1 = slow_ptr;
		ptr2 = slow_ptr;

		while (ptr1->next != ptr2)
		{
			ptr1 = ptr1->next;
			k++;
		}

		ptr1 = *h;
		ptr2 = *h;
		for (i = 0; i < k; i++)
			ptr2 = ptr2->next;
		while (ptr2 != ptr1)
		{
			ptr1 = ptr1->next;
			ptr2 = ptr2->next;
		}
		while (ptr2->next != ptr1)
		{
			ptr2 = ptr2->next;
			ptr2->next = NULL;
		}
		is_loop = false;
	}
	else
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
