#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given idx
 * @head: the inital pointer to the linked list
 * @idx: the index
 * @n: new data
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = *head;
	listint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!(*(head)))
	{
		*head = new;
		return (new);
	}
	aux = *head;
	if (idx == 0)
	{
		new->next = (*head)->next;
		(*head)->next = new;
		return (new);
	}

	while (i < idx)
	{
		if (aux->next)
			aux = aux->next;
		else
			return (0);
		i++;
	}
	new->next = aux->next;
	aux->next = new;
	return (new);
}
