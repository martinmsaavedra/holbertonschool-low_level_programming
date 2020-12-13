#include "lists.h"
/**
 *insert_dnodeint_at_index - function that inserts a
 *new node at a given position.
 *@h: double pointer to head
 *@idx: index to insert the node
 *@n: int data of node
 *Return: new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = NULL, *new = NULL;
	unsigned int i = 0, count = 0;

	if (!h)
		return (NULL);

	aux = *h;
	while (aux != NULL)
	{
		aux = aux->next;
		count++;
	}
	if (idx > count)
	{
		return (NULL);
	}
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	if (idx == count)
		return (add_dnodeint_end(h, n));
	
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	aux = *h;
	for (i = 0 ; i < idx - 1; i++)
		aux = aux->next;
	
	aux->next->prev = new;
	aux->next = new;
	new->n = n;
	new->next = aux->next;
	new->prev = aux;
		
	return (new);
}
