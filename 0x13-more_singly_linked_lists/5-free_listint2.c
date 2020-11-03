#include "lists.h"
/**
 *free_listint2 - function that frees a list_t
 *@head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	while (*head)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
}
