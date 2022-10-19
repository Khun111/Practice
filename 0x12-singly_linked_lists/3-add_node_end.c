#include "lists.h"
/**
 * add_node - appends new node to the end
 * @head: pointer to head pointer
 * @str: member of struct
 * Return: new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add = malloc(sizeof(list_t)), *trav = *head;

	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = strlen(str);
	add->next = NULL;
	if (*head == NULL)
		*head = add;
	else
	{
		while (trav->next != NULL)
			trav = trav->next;
		trav->next = add;
	}
	return (add);
}
