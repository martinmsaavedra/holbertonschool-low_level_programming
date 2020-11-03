#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: the inital pointer to the linked list
 * @index: the index
 * Return: 1 if succedd, -1 if it fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head, *prev;
	unsigned int i = 0;

	if (!(*(head)))
		return (-1);
	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}
	while (i < index)
	{
		if (aux->next)
		{
			prev = aux;
			aux = aux->next;
		}
		else
			return (-1);
		i++;
	}
	prev->next = aux->next;
	free(aux);
	return (1);
}
