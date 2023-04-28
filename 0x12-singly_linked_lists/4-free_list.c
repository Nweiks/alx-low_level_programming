#include <stdlib.h>
#include "lists.h"

/**
 *free_listc - frees the list_t
 *@head: list_t to be freed
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
		}
}
