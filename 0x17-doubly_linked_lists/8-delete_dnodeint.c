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
/**
 *delete_dnodeint_at_index - function that deletes the node
 *at index index of a dlistint_t linked list.
 *@head: double pointer to head
 *@index: index of node to delete
 *Return: 1 on success, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *temp;
	unsigned int i = 0;

	if (!head)
		return (-1);

	if (index >= dlistint_len(*head))
		return (-1);

	if (index == 0)
	{
		aux = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(aux);
		return (1);
	}
	if (index == dlistint_len(*head) - 1)
	{
		while (i++ < index - 1)
			temp = temp->next;
		aux = temp->next;
		temp->next = NULL;
		free(aux);
		return (1);
	}
	while (i++ < index - 1)
		temp = temp->next;
	aux = temp->next;
	temp->next = temp->next->next;
	temp->next->prev = temp;
	free(aux);
	return (1);
}
