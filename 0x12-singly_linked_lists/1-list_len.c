#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *list_len - list the lenght
 *@h: pointer to first
 *Return: c
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
