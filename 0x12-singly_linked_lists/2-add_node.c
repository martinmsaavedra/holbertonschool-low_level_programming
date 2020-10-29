#include "lists.h"
/**
 *add_node - adds a new node at the beginning of a list_t
 *@head: pointer to pointer to head
 *@str: string to copy
 *Return: Returns the address of memory
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	if (!str || !head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new->len = i;
	*head = new;
	return (new);
}
