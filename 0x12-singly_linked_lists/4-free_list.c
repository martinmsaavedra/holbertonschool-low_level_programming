#include "lists.h"
/**
 *free_list - function that frees a list_t
 *@head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
