#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
    dlistint_t *aux;
    int total;

    if (!head)
        return (0);
    
    aux = head;
    while (aux)
    {
        total += aux->n;
        aux = aux->next;
    }
    return (total);
}