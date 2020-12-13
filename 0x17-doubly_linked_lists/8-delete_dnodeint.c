#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to start of the list
 * @index: index of the node to delete
 * Return: 1 success 0 not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *aux = NULL;
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
/**
 * dlistint_len - function that counts and returns
 * the nodes in a Double linked list
 * @h: pointer to first node (head)
 * Return: total number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	for (; h; count++)
	{
		h = h->next;
	}
	return (count);
}
