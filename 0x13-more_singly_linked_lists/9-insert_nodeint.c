#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav = *head, *addidx = malloc(sizeof(listint_t));
	unsigned int i = 1;

	if (addidx == NULL)
		return (NULL);
	addidx->n = n;
	addidx->next = NULL;
	if (idx == 0)
	{
		addidx->next = *head;
		*head = addidx;
	}
	else
	{
		while (i < idx)
		{
			trav = trav->next;
			i++;
		}
		if (!(trav->next))
			return (NULL);
		addidx->next = trav->next;
		trav->next = addidx;
	}
	return (addidx);
}
