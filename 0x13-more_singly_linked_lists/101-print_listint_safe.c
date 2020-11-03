#include "lists.h"
/**
 *print_listint_safe - prints all the elements of a listint
 *@head: head of list
 *Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int number = 0;
	const listint_t *slow_p = NULL, *fast_p = NULL;

	if (!head)
		exit(98);
	slow_p = head;
	fast_p = head;
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		number++;
		if (slow_p == fast_p)
			break;
	}
	return (number);
}
