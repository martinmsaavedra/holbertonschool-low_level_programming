#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i = 0;

	if (!head)
		return (0);

	aux = head;

	while (aux->next)
	{
		aux = aux->next;
		i++;
		if (i == index)
		{
			if (aux == NULL)
				return (NULL);
			break;
		}
	}
return (aux);
}