#include "lists.h"
/**
 *reverse_listint - reverse list
 *@head: double pointer to head
 *Return: the new head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *prev = NULL;

	if (!(*(head)))
		return (0);
	current = *head;
	while (*head)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;
	return (*head);
}
