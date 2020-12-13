#include "lists.h"
/**
 *delete_dnodeint_at_index - function that deletes the node
 *at index index of a dlistint_t linked list.
 *@head: double pointer to head
 *@index: index of node to delete
 *Return: 1 on success, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int idx = 0;

	if (!head)
		return (-1);
	aux = *head;
	while (aux && idx <= index)
	{
		aux = aux->next;
		idx++;
	}
	if (index >= idx)
	{
		return (-1);
	}
	if (index == 0)
	{
		aux = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(aux);
		return (1);
	}
	else if (idx - 1 == index && index != 0)
	{
		aux->prev->next = aux->next;
		aux->next->prev = aux->prev;
		aux = aux->prev;
		free(aux);
		return (1);
	}
	return (-1);
}
