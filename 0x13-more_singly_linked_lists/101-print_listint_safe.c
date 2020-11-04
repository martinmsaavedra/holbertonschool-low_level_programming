#include "lists.h"
#include <stdbool.h>
/**
 *print_listint_safe - prints all the elements of a listint
 *@head: head of list
 *Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
const	listint_t *fast_ptr, *slow_ptr;

	bool is_loop;
	int nodes = 0;

	if (head == NULL)
		exit(98);
	fast_ptr = head;
	slow_ptr = head;
	is_loop = false;

	while (fast_ptr && slow_ptr && fast_ptr->next)
	{
		fast_ptr = fast_ptr->next->next;
		slow_ptr = slow_ptr->next;
		nodes++;
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
	while (fast_ptr && slow_ptr > fast_ptr + 1 && is_loop)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
	}
	if (is_loop)
		printf("-> [%p] %d\n", (void*)slow_ptr->next, slow_ptr->next->n);
	if (!is_loop)
	{
		slow_ptr = head;
		while (slow_ptr)
		{
			printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			slow_ptr = slow_ptr->next;
		}
	}

	return (nodes);
}
