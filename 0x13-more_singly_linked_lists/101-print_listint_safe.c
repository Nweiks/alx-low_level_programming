#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 *print_listint_safe - prints list of listint_t
 *@head: pointer to head of list
 *
 *Return: new 
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, prev;
	size_t count = 0;

	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);

		prev = current;
		current = current->next;

		if (current <= prev)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}
	return (count);
}

