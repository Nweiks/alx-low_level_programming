#include <stdlib.h>
#include "lists.h"

/**
 *sum_listint - sum list in node
 @head: head of list
 *REturn: sum of list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *c = head;

	while (c)
	{
		sum += c->n;
		c = c->next;
	}

	return (sum);
}
