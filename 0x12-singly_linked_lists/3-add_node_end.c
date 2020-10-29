#include "lists.h"
/**
 *add_node_end - adds a new node at the end of a list_t
 *@head: pointer to pointer to head
 *@str: string to copy
 *Return: Returns the address of memory
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux;
	int i;

	if (!str || !head)
		return (0);
	aux = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new->len = i;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = new;
	new->next = NULL;
	return (new);
}
