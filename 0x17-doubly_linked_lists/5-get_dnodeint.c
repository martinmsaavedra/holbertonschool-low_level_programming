#include "lists.h"
/**
 *get_dnodeint_at_index- function that returns the nth node
 *of a dlistint_t linked list.
 *@head: pointer to head
 *@index: index of node to insert
 *Return: new node of NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i = 0;

	if (!head)
		return (0);

	aux = head;

	while (aux->next)
	{
		aux = aux->next;
		i++;
		if (i == index)
		{
			if (aux == NULL)
				return (NULL);
			break;
		}
	}
	return (aux);
}
