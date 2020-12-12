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
    
    while(aux && index < idx - 1)
    {       
        aux = aux->next;
        index++;
    }
    if (idx > index + 1)
    {
        free(new);
        return (NULL);
    }  
    else if (idx == 0)
        add_dnodeint(h, n);
    else if (idx - 1 == index)
    {   
            new->n = n;
            new->next = aux->next;
            new->prev = aux;
            aux->next = new;
            aux->next->prev = new;
            return (new);
    }
    free(new);
    return(NULL);
}