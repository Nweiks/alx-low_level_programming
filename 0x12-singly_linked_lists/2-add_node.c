#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - add new node to list_t
 *@head: double pointer
 *@str: string
 *Return: new
 */

list_t add_node(list_t **head, const char *str)
{
	list_t *new;
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len =strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
