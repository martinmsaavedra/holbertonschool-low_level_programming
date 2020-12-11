#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
    size_t counter = 0;
    const dlistint_t *aux;

    if (h == NULL)
    {
        return (0);
    }
    aux = h;

    while (aux)
	{
        printf("%i\n", aux->n);
		aux = aux->next;
        counter++;
	}
	return (counter);
}
