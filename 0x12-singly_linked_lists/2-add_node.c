#include "lists.h"
/**
 * add_node - adds new node to the beginning
 * @head: pointer to head pointer
 * @str: member of struct
 * Return: new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = strlen(str);
	if (*head != NULL)
		add->next = *head;
	*head = add;
	return (add);
}
