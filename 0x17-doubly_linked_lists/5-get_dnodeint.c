#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index-- > 0)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
