#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *end;
	
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	
	if(!head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	end = *head;
	while (end)
		end = end->next;
	end->next = new_node;
	new_node->prev = end;

	return (new);
}
