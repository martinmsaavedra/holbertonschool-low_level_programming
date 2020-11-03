#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning
 *@head: double pointer to head of the list
 *@n: integer
 *Return: new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
