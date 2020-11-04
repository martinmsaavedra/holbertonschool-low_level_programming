#include "lists.h"
/**
 *free_listint_safe - free all the elements of a listint
 *@h: head of list
 *Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{

	int number = 0;
	istint_t **aux = NULL;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		aux = h;
		h = &(*h)->next;
		number++;
		free(aux);
	}
	return (number);
}
