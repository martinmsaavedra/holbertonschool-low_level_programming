#include "lists.h"
/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *@head: double pointer to head
 *@n: data int of node
 *Return: new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
