#include <stdlib.h>
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
	const listint_t *current = head;
	size_t count = 0;

	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);


		if (current->next >= current)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}
		current = current->next;
	}
	return (count);
}
