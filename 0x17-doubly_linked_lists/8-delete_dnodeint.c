#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *aux;
    unsigned int idx = 0;

    if (!head)
        return (-1);

    aux = *head;

    while (aux && idx <= index)
    {
        aux = aux->next;
        idx++;
    }

    if (index >= idx)
    {
        return (-1);
    }

    if (index == 0)
    {
        aux = *head;
        if ((*head)->next == NULL)
        {
            (*head) = NULL;
            free(aux);
            return (1);
        }
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(aux);
        return (1);
    }

    else if (idx - 1 == index && index != 0)
    {
        aux = aux->prev;
        aux->prev->next = aux->next;
        aux->next->prev = aux->prev;
        free(aux);
        return (1);
    }
    return (-1);
}