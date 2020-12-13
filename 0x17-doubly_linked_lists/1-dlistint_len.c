#include "lists.h"
/**
 *dlistint_len - calculates number of nodes
 *@h: head of list
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *aux;

	if (h == NULL)
	{
		return (0);
	}
	aux = h;

	while (aux)
	{
		aux = aux->next;
		counter++;
	}
	return (counter);
}
