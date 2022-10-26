#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav, *addidx = malloc(sizeof(listint_t));
	unsigned int i = 1, l;

	if (head == NULL || *head == NULL)
		return (NULL);
	trav = *head;
	if (addidx == NULL || listint_len(*head) <= idx)
	{
		free(addidx);
		return (NULL);
	}
	addidx->n = n;
	addidx->next = NULL;
	if (idx == 0)
	{
		addidx->next = *head;
		*head = addidx;
	}
	else
	{
		while (i++ < idx)
			trav = trav->next;
		if (!(trav->next))
			return (NULL);
		addidx->next = trav->next;
		trav->next = addidx;
	}
	return (addidx);
}
/**
 * listint_len - list items in list
 * @h: list head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *trav = h;
	int count = 0;

	while (trav != NULL)
	{
		count++;
		trav = trav->next;
	}
	return (count);
}
