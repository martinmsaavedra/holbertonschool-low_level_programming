#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node
 *@head: pointer to head
 *@index: index to search
 *Return: index of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int n = 0;

	if (!head)
		return (NULL);
	aux = head;
	while (n < index)
	{
		if (aux->next)
			aux = aux->next;
		else
			return (0);
		n++;
	}
	return (aux);
}
