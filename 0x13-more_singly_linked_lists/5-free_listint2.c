#include <stdlib.h>
#include "lists.h"

/**
 *free_listint - frees list
 *@head: pointer to head of list
 *Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *c_node;

	while (*head)
	{
		c_node = (*head);
		(*head) = (*head)->next;
		free(c_node);
	}
	*head = NULL;
}
~    
