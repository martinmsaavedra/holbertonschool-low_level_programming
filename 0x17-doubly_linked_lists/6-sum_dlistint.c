#include "lists.h"
/**
 *sum_dlistint - return the sum of all the data (n)
 *of a dlistint_t linked list.
 *@head: pointer to head
 *Return: sum or zero
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	int total;

	if (!head)
		return (0);
	aux = head;
	while (aux)
	{
		total += aux->n;
		aux = aux->next;
	}
	return (total);
}
