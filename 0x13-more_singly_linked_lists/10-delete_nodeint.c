#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav = *head;
	unsigned int i = 1;

	if (!(*head) || !head)
		return (-1);
	while (i < index)
	{
		trav = trav->next;
		i++;
	}
	trav->next = trav->next->next;
	free(trav->next);
	return (1);
}
