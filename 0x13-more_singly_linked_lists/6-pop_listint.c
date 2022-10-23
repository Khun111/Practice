#include "lists.h"
int pop_listint(listint_t **head)
{
    listint_t *trav = *head; int n = (*head)->n;
    
    if (*head == NULL)
        return (0);
    *head = (*head)->next;
    free(trav);
    return (n);
}