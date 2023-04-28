#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - add new node to list_t
 *@head: double pointer
 *@str: string
 *Return: new
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
	len++;
	
	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
