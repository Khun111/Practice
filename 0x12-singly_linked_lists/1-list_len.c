#include "lists.h"
/**
 * list_len - find number of list items
 * @h: list
 * Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
