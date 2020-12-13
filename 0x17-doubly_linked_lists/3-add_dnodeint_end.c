#include "lists.h"
/**
 *add_dnodeint_end - add node at the end of list
 *@head: double pointer to head
 *@n: data int of node
 *Return: new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *aux = NULL;

	if (!head)
		return (0);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);

	new->n = n;
	new->next = NULL;
	aux = *head;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	new->prev = aux;
	aux->next = new;
	return (new);
}
