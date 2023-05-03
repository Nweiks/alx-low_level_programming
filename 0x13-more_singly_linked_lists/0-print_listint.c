#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
*print_listint - lista all ints
*@h: pointer to list
*Return: counts
*/

size_t print_listint(const listint_t *h)
{
size_t counts = 0;

while (h)
{
printf("%d\n", h->n);
counts++;
h = h->next;
}
return (counts);
}
