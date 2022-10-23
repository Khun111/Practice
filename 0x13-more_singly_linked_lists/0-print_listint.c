#include "lists.h"
size_t print_listint(const listint_t *h)
{
    const listint_t *trav = h;
    int count = 0;

    while(trav != NULL)
    {
        printf("%i\n", trav->n);
        trav = trav->next;
        count++;
    }
    return (count);
}
