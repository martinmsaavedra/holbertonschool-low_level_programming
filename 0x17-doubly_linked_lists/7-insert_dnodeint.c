#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *aux, *new;
    unsigned int index = 0;

    if (!h || !idx)
        return (NULL);
    
    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);
    
    aux = *h;
    
    while(aux)
    {
        printf("ESTOY EN WHILE indice %d\n", index);
        if (idx == index)
        {
            new->n = n;
            new->next = aux;
            new->prev = aux->prev;
            aux->prev = new;
            aux->prev->next = new;
            return (new);
        }    
        aux = aux->next;
        index++;
    }
    return (NULL);
}