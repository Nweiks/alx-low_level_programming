#include <stdlib.h>
#include "lists.h"

/**
 *sum_listint - returns the sum of all the data (n) of a listint_t linked list
*@head: head of list
 *Return: sum of list
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
