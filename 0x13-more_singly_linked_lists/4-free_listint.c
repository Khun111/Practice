#include "lists.h"
void free_listint(listint_t *head)
{
	listint_t *trav;

	while (head != NULL)
	{
		trav = head;
		head = head->next;
		free(trav);
	}
}
