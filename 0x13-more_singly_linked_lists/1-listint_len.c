#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
*listint_len - list elements
*@h: pointer to list
*Return: counts
*/

size_t listint_len(const listint_t *h)
{
size_t counts = 0;

while (h != NULL)
{
counts++;
h = h->next;
}
return (counts);
}
