#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 *print_list - print list
 *@h: pointer
 *Return: c
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		c++;
	}
	return (c);
}