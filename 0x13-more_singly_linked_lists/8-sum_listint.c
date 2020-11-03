#include "lists.h"
/**
 *sum_listint - sums of all the data of a list
 *@head: pointer to head
 *Return: Returns the sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *aux;
	int total = 0;

	if (!head)
		return (0);
	aux = head;
	while (aux)
	{
		total += aux->n;
		aux = aux->next;
	}
	free(aux);
	return (total);
}
