#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addfirst = malloc(sizeof(listint_t));

	if (addfirst == NULL)
		return (NULL);
	addfirst->n = n;
	addfirst->next = *head;
	*head = addfirst;
	return (addfirst);
}
