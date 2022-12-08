#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *trav, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx-- > 1)
	{
		trav = trav->next;
		if (!trav)
			return (NULL);
	}

	if (trav->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = trav->next;
	new_node->prev = trav;
	trav->next->prev = new_node;
	trav->next = new_node;
	return (new_node);
}
