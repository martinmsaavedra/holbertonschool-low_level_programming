#include "lists.h"
#include <stdbool.h>
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to a linked list
 * Return: the address of where the loop starts
 * otherwise NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast_ptr, *slow_ptr;
	bool is_loop;

	if (head == NULL)
		return (NULL);
	fast_ptr = head;
	slow_ptr = head;
	is_loop = false;

	while (fast_ptr && slow_ptr && fast_ptr->next)
	{
		fast_ptr = fast_ptr->next->next;
		slow_ptr = slow_ptr->next;

		if (slow_ptr == fast_ptr)
		{
			is_loop = true;
			break;
		}
	}
	if (is_loop)
	{
		fast_ptr = head->next;
		slow_ptr = head;
	}
	while (fast_ptr && fast_ptr < slow_ptr && is_loop)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}
	return (fast_ptr);
}
