#include "lists.h"
/**
 *free_listint - function that frees a list_t
 *@head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
