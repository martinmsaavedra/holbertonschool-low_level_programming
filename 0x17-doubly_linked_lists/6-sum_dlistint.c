#include "lists.h"
/**
 *sum_dlistint - return the sum of all the data (n)
 *of a dlistint_t linked list.
 *@head: pointer to head
 *Return: sum or zero
 */
int sum_dlistint(dlistint_t *head)
{
	int total;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
