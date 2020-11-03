#include "lists.h"
/**
 *add_nodeint_end -  adds a new node at the end of a list
 *@head: double pointer to head
 *@n: integer
 *Return: addres of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	if (!head)
		return (0);
	aux = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (aux->next)
		aux = aux->next;
	aux->next = new;
	return (new);
}
