#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 *list_len - list the lenght
 *@h: pointer to first
 *Return: c
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
